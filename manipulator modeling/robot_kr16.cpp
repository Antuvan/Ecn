#include <ecn_manip/robot_kr16.h>
#include <ecn_manip/trig_solvers.h>

// Model of Kuka KR16 robot

// Any end-effector to wrist constant transform
void ecn::RobotKr16::init_wMe()
{

    // Generated end-effector code
    wMe[0][0] = 1.;
    wMe[0][1] = 0;
    wMe[0][2] = 0;
    wMe[0][3] = 0;
    wMe[1][0] = 0;
    wMe[1][1] = 1.;
    wMe[1][2] = 0;
    wMe[1][3] = 0;
    wMe[2][0] = 0;
    wMe[2][1] = 0;
    wMe[2][2] = 1.;
    wMe[2][3] = 0.158000000000000;
    wMe[3][0] = 0;
    wMe[3][1] = 0;
    wMe[3][2] = 0;
    wMe[3][3] = 1.;
    // End of end-effector code


}

// Direct Geometry fixed to wrist frame
vpHomogeneousMatrix ecn::RobotKr16::fMw(const vpColVector &q) const
{
    vpHomogeneousMatrix M;

    // Generated pose code
    const double c1 = cos(q[0]);
    const double c2 = cos(q[1]);
    const double c4 = cos(q[3]);
    const double c5 = cos(q[4]);
    const double c6 = cos(q[5]);
    const double c23 = cos(q[1]+q[2]);
    const double s1 = sin(q[0]);
    const double s2 = sin(q[1]);
    const double s4 = sin(q[3]);
    const double s5 = sin(q[4]);
    const double s6 = sin(q[5]);
    const double s23 = sin(q[1]+q[2]);
    M[0][0] = (-(s1*s4 + s23*c1*c4)*c5 - s5*c1*c23)*c6 - (s1*c4 - s4*s23*c1)*s6;
    M[0][1] = (-(s1*s4 + s23*c1*c4)*c5 - s5*c1*c23)*s6 + (s1*c4 - s4*s23*c1)*c6;
    M[0][2] = -(s1*s4 + s23*c1*c4)*s5 + c1*c5*c23;
    M[0][3] = (-0.035*s23 + 0.68*c2 + 0.67*c23 + 0.26)*c1;
    M[1][0] = ((s1*s23*c4 - s4*c1)*c5 + s1*s5*c23)*c6 - (s1*s4*s23 + c1*c4)*s6;
    M[1][1] = ((s1*s23*c4 - s4*c1)*c5 + s1*s5*c23)*s6 + (s1*s4*s23 + c1*c4)*c6;
    M[1][2] = (s1*s23*c4 - s4*c1)*s5 - s1*c5*c23;
    M[1][3] = (0.035*s23 - 0.68*c2 - 0.67*c23 - 0.26)*s1;
    M[2][0] = (s5*s23 - c4*c5*c23)*c6 + s4*s6*c23;
    M[2][1] = (s5*s23 - c4*c5*c23)*s6 - s4*c6*c23;
    M[2][2] = -s5*c4*c23 - s23*c5;
    M[2][3] = -0.68*s2 - 0.67*s23 - 0.035*c23 + 0.675;
    M[3][0] = 0;
    M[3][1] = 0;
    M[3][2] = 0;
    M[3][3] = 1.;
    // End of pose code

    return M;
}


// Inverse Geometry
vpColVector ecn::RobotKr16::inverseGeometry(const vpHomogeneousMatrix &fMe_des, const vpColVector &q0) const
{
    // desired wrist pose
    vpHomogeneousMatrix fMw = fMe_des * wMe.inverse();
    vpRotationMatrix R03;
    vpRotationMatrix R36;
    vpRotationMatrix R06_des = fMw.getRotationMatrix();
    const auto [xx,xy,xz,yx,yy,yz,zx,zy,zz,tx,ty,tz] = explodeMatrix(fMe_des);

    for (auto q1:{-atan2(ty,tx), -atan2(ty,tx)+M_PI})
    {
        double w1 = -0.67, w2 = 0.035, X = 0.68, Y = 0, Z1 = (ty/sin(q1))+0.26, Z2 = tz-0.675;
        for (auto qs: solveType7(X, Y, Z1, Z2, w1, w2))
        {
            auto q2 = qs.qi;        auto q3 = qs.qj - q2;
            const double c1 = cos(q1);
            const double c23 = cos(q2+q3);
            const double s1 = sin(q1);
            const double s23 = sin(q2+q3);
            R03[0][0] = s23*c1;
            R03[0][1] = c1*c23;
            R03[0][2] = s1;
            R03[1][0] = -s1*s23;
            R03[1][1] = -s1*c23;
            R03[1][2] = c1;
            R03[2][0] = c23;
            R03[2][1] = -s23;
            R03[2][2] = 0;
            R36 = R03.inverse() * R06_des;

            for (auto q4:{atan2(R36[2][2], R36[0][2]), atan2(R36[2][2], R36[0][2]) + M_PI})
            {
                double x1 = -cos(q4), y1 = 0, z1 = R36[0][2], x2 = 0, y2 = 1, z2 = R36[1][2];
                for (auto q5: solveType3(x1, y1, z1, x2, y2, z2))
                {
                    double x1 = 0, y1 = -sin(q5), z1 = R36[1][0], x2 = -sin(q5), y2 = 0, z2 = R36[1][1];
                    for (auto q6: solveType3(x1, y1, z1, x2, y2, z2))
                    {
                        addCandidate({q1,q2,q3,q4,q5,q6});
                    }
                }
            }
        }
    }

        return bestCandidate(q0);
    }


    vpMatrix ecn::RobotKr16::fJw(const vpColVector &q) const
    {
        vpMatrix J(6, dofs);

        // Generated Jacobian code
        const double c1 = cos(q[0]);
        const double c2 = cos(q[1]);
        const double c4 = cos(q[3]);
        const double c5 = cos(q[4]);
        const double c23 = cos(q[1]+q[2]);
        const double s1 = sin(q[0]);
        const double s2 = sin(q[1]);
        const double s4 = sin(q[3]);
        const double s5 = sin(q[4]);
        const double s23 = sin(q[1]+q[2]);
        J[0][0] = -(0.035*s23 - 0.68*c2 - 0.67*c23 - 0.26)*s1;
        J[0][1] = -(0.68*s2 + 0.67*s23 + 0.035*c23)*c1;
        J[0][2] = -(0.67*s23 + 0.035*c23)*c1;
        //J[0][3] = 0;
        //J[0][4] = 0;
        //J[0][5] = 0;
        J[1][0] = (-0.035*s23 + 0.68*c2 + 0.67*c23 + 0.26)*c1;
        J[1][1] = (0.68*s2 + 0.67*s23 + 0.035*c23)*s1;
        J[1][2] = (0.67*s23 + 0.035*c23)*s1;
        //J[1][3] = 0;
        //J[1][4] = 0;
        //J[1][5] = 0;
        //J[2][0] = 0;
        J[2][1] = 0.035*s23 - 0.68*c2 - 0.67*c23;
        J[2][2] = 0.035*s23 - 0.67*c23;
        //J[2][3] = 0;
        //J[2][4] = 0;
        //J[2][5] = 0;
        //J[3][0] = 0;
        J[3][1] = s1;
        J[3][2] = s1;
        J[3][3] = c1*c23;
        J[3][4] = s1*c4 - s4*s23*c1;
        J[3][5] = -(s1*s4 + s23*c1*c4)*s5 + c1*c5*c23;
        //J[4][0] = 0;
        J[4][1] = c1;
        J[4][2] = c1;
        J[4][3] = -s1*c23;
        J[4][4] = s1*s4*s23 + c1*c4;
        J[4][5] = (s1*s23*c4 - s4*c1)*s5 - s1*c5*c23;
        J[5][0] = 1.;
        //J[5][1] = 0;
        //J[5][2] = 0;
        J[5][3] = -s23;
        J[5][4] = -s4*c23;
        J[5][5] = -s5*c4*c23 - s23*c5;
        // End of Jacobian code

        return J;
    }
