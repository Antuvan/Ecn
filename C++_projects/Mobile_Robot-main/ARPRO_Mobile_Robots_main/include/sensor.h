#ifndef SENSOR_H
#define SENSOR_H

#include <string>
#include <envir.h>
#include <robot.h>

using std::endl;    
using std::cout;

namespace arpro
{

class Sensor
{
public:
    Sensor(Robot &_robot, double _x, double _y, double _theta)
    {
        s_ = 0;
        alpha_ = 0;
        s_history_.clear();
        robot_ = &_robot;
        pose_ = Pose(_x, _y, _theta);
        _robot.attach(this);
    }

    inline static void setEnvironment(Environment &_envir) {envir_ = &_envir;}

    virtual void update(const Pose &_p) = 0;

    void updateFromRobotPose(const Pose &_p)
    {
        update(pose_.transformDirect(_p));
    }

    virtual void correctTwist(Twist &_v) {}

    void correctRobotTwist(Twist &_v)
    {
        cout << " Correction new sensor" << endl;
        cout << "     Base robot twist: " << _v << endl;
        
        _v = _v.transformInverse(pose_);
        cout << "     Base sensor twist: " << _v << endl;

        
        correctTwist(_v);
        cout << "     Corrected sensor twist: " << _v << endl;

        
        _v = _v.transformDirect(pose_);
        cout << "     Corrected robot twist: " << _v << endl;
    }

   
    double read() {return s_;}

protected:
    double s_;
    double alpha_;
    std::vector<double> s_history_;
    static Environment* envir_;
    Pose pose_;
    Robot* robot_;
};
}



#endif 
