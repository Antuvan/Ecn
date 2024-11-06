#ifndef SENSOR_RANGE_H
#define SENSOR_RANGE_H

#include <sensor.h>
#include <algorithm>

using std::endl;    
using std::cout;

namespace arpro 
{

class RangeSensor : public Sensor
{
public:
    RangeSensor(Robot &_robot, double _x, double _y, double _theta) :
        Sensor(_robot, _x, _y, _theta)  {}

    virtual void update(const Pose &_p)
    {
        cout << "update function" << endl;

        Pose p1, p2;
        double dists[envir_->walls.size()];
        double minDist = 100;
        for (int i=0; i<envir_->walls.size(); ++i)
        {
            p1 = envir_->walls[i];
            p2 = envir_->walls[(i+1)%envir_->walls.size()];
            auto numDist = p1.x*p2.y - p1.x*_p.y - p2.x*p1.y + p2.x*_p.y + _p.x*p1.y - _p.x*p2.y;
            auto denDist = sin(_p.theta)*(p1.x - p2.x) - cos(_p.theta)*(p1.y - p2.y);
            auto dist = numDist / denDist;
            if (dist < minDist && dist > 0)
            {
                minDist = dist;
                cout << p1.x <<" "<< p1.y << " and " << p2.x <<" "<< p2.y<< endl;
            }
            dists[i] = abs(dist);

        }
        s_ = *std::min_element(dists, dists + envir_->walls.size());
        cout <<"Min Distance = " << s_ << endl;
    }

    virtual void correctTwist(Twist &_v)
    {
        auto g = 7;   auto Sm = 0.1;
        if (_v.vx > g*(s_ - Sm))
            _v.vx = g*(s_ - Sm);
    }

};
}

#endif 

