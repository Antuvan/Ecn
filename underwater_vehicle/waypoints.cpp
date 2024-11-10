#include "waypoints.h"

#include <rclcpp/rclcpp.hpp>
#include <exception>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <tf2_ros/buffer.h>
#include <tf2_ros/transform_listener.h>
#include <yaml-cpp/yaml.h>

using namespace geometry_msgs::msg;
using namespace std::chrono_literals;

class Control : public rclcpp::Node
{
public:
  Control() : Node("waypoints")
  {
    set_parameter(rclcpp::Parameter("use_sim_time", true));

    // load waypoints and thresholds
    Waypoint::load(waypoints, position_thr, orientation_thr);

    pose_cmd.header.frame_id = "world";
    pub = create_publisher<PoseStamped>("/bluerov2/cmd_pose", 1);

    static auto timer{create_wall_timer(10ms, [&]()
      {
        if(!buffer.canTransform("world", "bluerov2/base_link", tf2::TimePointZero))
          return;
        const auto transform{buffer.lookupTransform("world", "bluerov2/base_link", tf2::TimePointZero)};
        trackWaypoint(transform.transform);
      })};
  }

private:

  std::vector<Waypoint> waypoints;
  double position_thr, orientation_thr;

  tf2_ros::Buffer buffer{get_clock()};
  tf2_ros::TransformListener tl{buffer};

  PoseStamped pose_cmd;
  rclcpp::Publisher<PoseStamped>::SharedPtr pub;


  void trackWaypoint(const Transform &pose)// pose is the parameter that we can use to get curr positions
  {
    static auto cur_wp{0};

    // TODO update cur_wp to cycle through the waypoints when the current one is reached
    double curr_x= pose.translation.x;
    double curr_y= pose.translation.y;
    double curr_z= pose.translation.z;
    double curr_theta_z= pose.rotation.z;
    double curr_theta_w= pose.rotation.w;

    const Waypoint &tgt_wp = waypoints[cur_wp];
    double position_error = std::sqrt(
                std::pow(curr_x - tgt_wp.x,2)+
                std::pow(curr_y - tgt_wp.y,2)+
                std::pow(curr_z - tgt_wp.z,2)
                );
    // wp.theta desired error
    double yaw=2*atan2(curr_theta_z,curr_theta_w);
    double orientation_error= yaw - tgt_wp.theta;


    if (position_error < position_thr && orientation_error < orientation_thr)
     cur_wp=(cur_wp +1 )% waypoints.size();


    waypoints[cur_wp].write(pose_cmd);
    pose_cmd.header.stamp = get_clock()->now();
    pub->publish(pose_cmd);
  }
};



int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<Control>());
  rclcpp::shutdown();
  return 0;
}
