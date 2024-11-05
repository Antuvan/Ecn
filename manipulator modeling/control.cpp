#include <ecn_manip/robot_init.h>

using namespace std;
using namespace ecn;

int main(int argc, char ** argv)
{
    // initialize robot class and get DOF's
    const auto robot{initRobot(argc, argv, 100)};
    const unsigned n{robot->getDofs()};

    // robot properties - max velocity and acceleration
    const auto vMax{robot->vMax()};
    const auto aMax{robot->aMax()};

    // main variables
    vpColVector q(n);               // joint position
    vpPoseVector p;                 // operational pose
    vpColVector qCommand(n);        // joint position setpoint
    vpColVector vCommand(n);        // joint velocity setpoint

    vpMatrix Jinv;
    vpHomogeneousMatrix M,Ms;          // current pose
    vpHomogeneousMatrix M0, Md, Mi; // previous, final and current desired poses
    vpPoseVector pd;                // desired pose
    vpColVector v;                  // desired operational velocity

    // TODO declare other variables if needed
    //vpPoseVector pe;                // error pose
    vpColVector ve(6);              // final error velocity
    vpColVector q0(n), qf(n);        // joint position setpoint for initial and final poses
    double t0, tf;

    // main control loop
    while(robot->ok())
    {
        // current time
        const auto t{robot->time()};

        // update desired pose if has changed
        if(robot->newRef())
        {
            Md = robot->Md();
            M0 = robot->M0();
            pd.buildFrom(Md);
            t0 = t;
        }

        // get current joint positions
        q = robot->jointPosition();
        //cout << "Current joint position : " << q.t() << endl;

        // Direct Geometry for end-effector
        M = robot->fMe(q);  // matrix form
        p.buildFrom(M);     // translation + angle-axis form

        if(robot->mode() == ControlMode::POSITION_MANUAL)
        {
            // just check the Direct Geometric Model
            // TODO: fill the fMw function
            robot->checkPose(M);
        }


        else if(robot->mode() == ControlMode::VELOCITY_MANUAL)
        {
            // follow a given operational velocity
            v = robot->guiVelocityScrew();

            // TODO: fill the fJw function
            // TODO: compute vCommand
            
            vpMatrix Rot(6,6);


            ecn::putAt(Rot, M.getRotationMatrix(), 0, 0);
            ecn::putAt(Rot, M.getRotationMatrix(), 3, 3);

            auto fw = Rot*v;
            
            
            
          
            
            
            vCommand = robot->fJe(q).pseudoInverse() * fw;

            robot->setJointVelocity(vCommand);
        }


        else if(robot->mode() == ControlMode::DIRECT_P2P)
        {
            // find the Inverse Geometry to reach Md
            // TODO: fill the inverseGeometry function
            qf = robot->inverseGeometry(Md, q);
            robot->setJointPosition(qf);
        }

        else if(robot->mode() == ControlMode::POLYNOM_P2P)
        {

            // reach Md with polynomial joint trajectory

            // use q0 (initial position), qf (final), aMax and vMax


            // if reference has changed, compute new tf

            if(robot->newRef())

            {

                q0 = robot->inverseGeometry(M0, q);
                qf = robot->inverseGeometry(Md, q);

                double tf = 0;

                                for(int i=0; i<6; i++)

                                {

                                    auto dq = qf[i]-q0[i];
                                    auto tfv = (3*abs(dq))/(2*vMax[i]);
                                    auto tfa = sqrt((6*abs(dq))/(aMax[i]));
                                    auto a = max(tfv, tfa);
                                    if(a>tf)
                                    {
                                        tf = a;
                                    }
                                }

            }


            // TODO: compute qCommand from q0, qf, t, t0 and tf


            auto pt = 3*pow(min((t-t0)/tf,1.0),2)-2*pow(min((t-t0)/tf,1.0),3);

                        auto qCommand = q0+pt*(qf-q0);

                        robot->setJointPosition(qCommand);

        }



        else if(robot->mode() == ControlMode::STRAIGHT_LINE_P2P)
        {

            tf = 1;
            // TODO: compute qCommand from M0, Md, t, t0 and tf

            // use robot->intermediaryPose to build poses between M0 and Md

            auto alpha = (t-t0)/tf;
            auto M     = robot -> intermediaryPose(M0,Md,alpha);
            qCommand   = robot -> inverseGeometry(M, q);
            robot->setJointPosition(qCommand);

        }



        else if(robot->mode() == ControlMode::VELOCITY_P2P)
        {

                   // go to Md using operational velocity

                   p.buildFrom(Md.inverse()*M);
                   vpMatrix fRe = M.getRotationMatrix();
                   vpMatrix fRed = Md.getRotationMatrix();
                   vpMatrix t = p.getTranslationVector();
                   vpMatrix thetaU = p.getThetaUVector();
                   auto lambda = robot -> lambda();
                   vpColVector v = lambda*fRe*t;
                   vpColVector w = lambda*fRed*thetaU;


                   // TODO: compute joint velocity command

                   vpMatrix vw(6,1);
                   ecn::putAt(vw, v, 0, 0);
                   ecn::putAt(vw, w, 3, 0);
                   vpMatrix Jplus = robot -> fJe(q).pseudoInverse();
                   auto vCommand = Jplus*vw;



                   robot->setJointVelocity(vCommand);

               }


        }
     }

