#include <iostream>
#include <math.h>
#include <cmath>

#include <robot.h>
#include <envir.h>
#include <sensor.h>
#include <sensor_range.h>
#include <sensor_bearing.h>

using namespace std;
using namespace arpro;

int main(int argc, char **argv)
{

  // Default environment
  Environment envir;
  // Sensor measurements from the environment
  Sensor::setEnvironment(envir);

  // Initiating the robot at origin
  Robot robot1("Robot 1", 0,0,0);
  Robot robot2("Robot 2", 0,0,0);

  RangeSensor rangeSensor(robot1, 0.1, 0, 0);
  SensorBearing bearingSensor(robot2, 0.1, 0, 0);

  auto r1 = 0.07; // Wheel radius
  auto b = 0.3; // Base distance
  auto omegaLimit = 10; // Wheel velocity limit
  robot1.initWheel(r1, b, omegaLimit);

  auto r2 = 0.05; // Wheel radius
  robot2.initWheel(r2, b, omegaLimit);

  envir.addRobot(robot1);
  envir.addRobot(robot2);

  // simulate 100 sec
  while(envir.time() < 100)
  {
    cout << "---------------------" << endl;

    // Target position updation
    envir.updateTarget();

    // Target tracking
    robot1.goTo(envir.target());

    robot2.moveWithSensor(Twist(0.4,0,0));

  }

  // Trajectory plotting
  envir.plot();

}
