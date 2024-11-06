#ifndef SENSOR_BEARING_H
#define SENSOR_BEARING_H

#include <sensor.h>
#include <cmath>
using std::endl;    
using std::cout;

namespace arpro 
{

class SensorBearing : public Sensor
{
public:
    SensorBearing(Robot &_robot, double _x, double _y, double _theta) :
        Sensor(_robot, _x, _y, _theta)  {}

    virtual void update(const Pose &_p)
    {
        cout << "Bearing update function" << endl;

        for (auto other : envir_ -> robots_)
            if (other != robot_)
            {
                alpha_ = std::atan2(other->pose().y - _p.y , other->pose().x - _p.x) - _p.theta ;
                cout << "Alpha :  " << alpha_ << endl;
                break;
            }

    }

    virtual void correctTwist(Twist &_v)
    {
        cout << "Bearing correctTwist" << endl;

        auto g = 0.5;
        _v.w = _v.w - g * alpha_;

    }

};
}







#endif 
