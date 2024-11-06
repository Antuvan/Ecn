#ifndef ROBOT_H
#define ROBOT_H

#include <vector>
#include <geom.h>

namespace arpro
{

class Sensor;

class Robot
{
public:
    // Initialising the robot at (x,y,theta)
    Robot(std::string _name, double _x, double _y, double _theta);
    void setSamplingTime(double dt)
    {
      dt_ = dt;
    }

    Pose pose() {return pose_;}

    // Interfacing the sensor
    void attach(Sensor *_sensor)
    {
        sensors_.push_back(_sensor);
    }
    
    // Robot propagation with Linear and Angular velocities
    void moveVW(double _v, double _omega);

    // Attributes for radius, base distance & initWheel()
    bool wheels_init_ = false;
    int wheelVelLimit; 
    float wheelRadius;    
    float baseDistance;
    void initWheel(double _r, double _b, int wheelVelLim);

    // Robot manipulation with given wheel velocity
    void rotateWheels(double _left, double _right);

    // Robot propagation to the given location with sensor constraints
    void goTo(const Pose &_p);

    //Tracking local frame velocity with sensor constraints
    void moveWithSensor(Twist _twist);
    void printPosition();

    inline void getHistory(std::vector<double> &_x, std::vector<double> &_y) const
    {
        _x = x_history_;
        _y = y_history_;
    }

    inline std::string name() const {return name_;}

protected:
    // Position
    Pose pose_;
    std::vector<double> x_history_, y_history_;
    std::string name_;

    // Sampling time
    double dt_ = 0.1;

    // Sensors
    std::vector<Sensor*> sensors_;

private:
    // Robot propagation with given velocity
    void moveXYT(double _vx, double _vy, double _omega);
};

}

#endif
