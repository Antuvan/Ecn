#ifndef ENVIR_H
#define ENVIR_H

#include <vector>
#include <geom.h>

namespace arpro
{


class Robot;

class Environment
{
public:
    std::vector<Pose> walls;
    Pose target_;
    std::vector<double> x_hist, y_hist;
    std::vector<Robot*> robots_;

    double dt = 0.1;
    double t = 0;

    Environment();



    double time() const
    {
      return t;
    }

    // Cardoid curve generation
    void updateTarget();

    Pose target() const
    {
      return target_;
    }

    void addRobot(Robot &_robot);

    // Trajectory plotting
    void plot();
};

}

#endif 
