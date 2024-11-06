

#include <iostream>
#include <math.h>
#include <robot.h>
#include <sensor.h>


using namespace arpro;
using namespace std;

Environment* Sensor::envir_ = nullptr;

//Principal pose parameters
Robot::Robot(string _name, double _x, double _y, double _theta) 
{    
    pose_.x = _x;
    pose_.y = _y;
    pose_.theta = _theta;

    name_ = _name;

    // Initiating position history
    x_history_.push_back(_x);
    y_history_.push_back(_y);
}


void Robot::moveXYT(double _vx, double _vy, double _omega)
{
    // Position updation with time
    pose_.x += _vx*dt_;
    pose_.y += _vy*dt_;
    pose_.theta += _omega*dt_;

    // Storing position history
    x_history_.push_back(pose_.x);
    y_history_.push_back(pose_.y);
}

void Robot::initWheel(double _r, double _b, int wheelVelLim)
{
    wheelRadius = _r; 
    baseDistance = _b; 
    wheelVelLimit = wheelVelLim;
    wheels_init_ = true;
}

void Robot::rotateWheels(double _left, double _right)
{
    if(wheels_init_ == true)
    {
        auto alpha = max((abs(_left)/wheelVelLimit), (abs(_right)/wheelVelLimit));
        if (alpha < 1)
            alpha = 1;
        _left /= alpha;
        _right /= alpha;

        auto v = (_left + _right)*(wheelRadius/2);
        auto omega = (_left - _right)*(wheelRadius/(2*baseDistance));

        const double x_dot = v*cos(pose_.theta);
        const double y_dot = v*sin(pose_.theta);
        moveXYT(x_dot, y_dot, omega);
    }
}


// Robot manipulation with linear and angular velocities
void Robot::moveVW(double _v, double _omega)
{
    auto omegaL = (_v + _omega*baseDistance)/wheelRadius;
    auto omegaR = (_v - _omega*baseDistance)/wheelRadius;
    rotateWheels(omegaL, omegaR);
}


// Robot propagation to the given location
void Robot::goTo(const Pose &_p)
{
    // Robot frame error
    Pose error = _p.transformInverse(pose_);

    // Straight line propagation with the sensor constraints
    moveWithSensor(Twist(error.x, error.y, 0));
}


void Robot::moveWithSensor(Twist _twist)
{
    for (auto &sensor : sensors_)
    {
        sensor -> updateFromRobotPose(pose_);
        sensor -> correctRobotTwist(_twist);
    }
    auto alpha{20};
    auto v = _twist.vx;
    auto w = alpha*_twist.vy + _twist.w;
    moveVW(v, w);

}


void Robot::printPosition()
{
    cout << "Current position: " << pose_.x << ", " << pose_.y << endl;
}

