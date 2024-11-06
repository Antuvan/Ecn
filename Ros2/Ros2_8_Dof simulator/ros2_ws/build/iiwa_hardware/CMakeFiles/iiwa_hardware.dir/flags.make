# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# compile C with /usr/bin/cc
# compile CXX with /usr/bin/c++
C_DEFINES = -DDEFAULT_RMW_IMPLEMENTATION=rmw_fastrtps_cpp -DHAVE_SOCKLEN_T -DHAVE_STDBOOL_H -DHAVE_STDDEF_H -DHAVE_STDINT_H -DHAVE_STDLIB_H -DHAVE_STRING_H -DPB_FIELD_16BIT -DPB_SYSTEM_HEADER=\"pb_syshdr.h\" -DRCUTILS_ENABLE_FAULT_INJECTION -Diiwa_hardware_EXPORTS

C_INCLUDES = -I/usr/include/eigen3 -I/home/ajay/ros2_ws/src/iiwa_ros2/iiwa_hardware/include -I/home/ajay/ros2_ws/src/iiwa_ros2/iiwa_hardware/external/libFRI/include -I/home/ajay/ros2_ws/src/iiwa_ros2/iiwa_hardware/external/libFRI/src/protobuf_gen -I/home/ajay/ros2_ws/src/iiwa_ros2/iiwa_hardware/external/libFRI/src/nanopb-0.2.8 -I/home/ajay/ros2_ws/src/iiwa_ros2/iiwa_hardware/external/libFRI/src/protobuf -I/home/ajay/ros2_ws/src/iiwa_ros2/iiwa_hardware/external/libFRI/src/connection -I/home/ajay/ros2_ws/src/iiwa_ros2/iiwa_hardware/external/libFRI/src/client_lbr -I/home/ajay/ros2_ws/src/iiwa_ros2/iiwa_hardware/external/libFRI/src/base -I/opt/ros/humble/include -isystem /opt/ros/humble/include/pluginlib -isystem /opt/ros/humble/include/rclcpp -isystem /opt/ros/humble/include/rclcpp_lifecycle -isystem /opt/ros/humble/include/control_msgs -isystem /opt/ros/humble/include/lifecycle_msgs -isystem /opt/ros/humble/include/rcpputils -isystem /opt/ros/humble/include/rcutils -isystem /opt/ros/humble/include/ament_index_cpp -isystem /opt/ros/humble/include/class_loader -isystem /opt/ros/humble/include/libstatistics_collector -isystem /opt/ros/humble/include/builtin_interfaces -isystem /opt/ros/humble/include/rosidl_runtime_c -isystem /opt/ros/humble/include/rosidl_typesupport_interface -isystem /opt/ros/humble/include/fastcdr -isystem /opt/ros/humble/include/rosidl_runtime_cpp -isystem /opt/ros/humble/include/rosidl_typesupport_fastrtps_cpp -isystem /opt/ros/humble/include/rmw -isystem /opt/ros/humble/include/rosidl_typesupport_fastrtps_c -isystem /opt/ros/humble/include/rosidl_typesupport_introspection_c -isystem /opt/ros/humble/include/rosidl_typesupport_introspection_cpp -isystem /opt/ros/humble/include/rcl -isystem /opt/ros/humble/include/rcl_interfaces -isystem /opt/ros/humble/include/rcl_logging_interface -isystem /opt/ros/humble/include/rcl_yaml_param_parser -isystem /opt/ros/humble/include/libyaml_vendor -isystem /opt/ros/humble/include/tracetools -isystem /opt/ros/humble/include/statistics_msgs -isystem /opt/ros/humble/include/rosgraph_msgs -isystem /opt/ros/humble/include/rosidl_typesupport_cpp -isystem /opt/ros/humble/include/rosidl_typesupport_c -isystem /opt/ros/humble/include/rcl_lifecycle -isystem /opt/ros/humble/include/action_msgs -isystem /opt/ros/humble/include/unique_identifier_msgs -isystem /opt/ros/humble/include/geometry_msgs -isystem /opt/ros/humble/include/std_msgs -isystem /opt/ros/humble/include/sensor_msgs -isystem /opt/ros/humble/include/trajectory_msgs

C_FLAGS = -O3 -DNDEBUG -fPIC   -fPIC -Wall -Wextra

CXX_DEFINES = -DDEFAULT_RMW_IMPLEMENTATION=rmw_fastrtps_cpp -DHAVE_SOCKLEN_T -DHAVE_STDBOOL_H -DHAVE_STDDEF_H -DHAVE_STDINT_H -DHAVE_STDLIB_H -DHAVE_STRING_H -DPB_FIELD_16BIT -DPB_SYSTEM_HEADER=\"pb_syshdr.h\" -DRCUTILS_ENABLE_FAULT_INJECTION -Diiwa_hardware_EXPORTS

CXX_INCLUDES = -I/usr/include/eigen3 -I/home/ajay/ros2_ws/src/iiwa_ros2/iiwa_hardware/include -I/home/ajay/ros2_ws/src/iiwa_ros2/iiwa_hardware/external/libFRI/include -I/home/ajay/ros2_ws/src/iiwa_ros2/iiwa_hardware/external/libFRI/src/protobuf_gen -I/home/ajay/ros2_ws/src/iiwa_ros2/iiwa_hardware/external/libFRI/src/nanopb-0.2.8 -I/home/ajay/ros2_ws/src/iiwa_ros2/iiwa_hardware/external/libFRI/src/protobuf -I/home/ajay/ros2_ws/src/iiwa_ros2/iiwa_hardware/external/libFRI/src/connection -I/home/ajay/ros2_ws/src/iiwa_ros2/iiwa_hardware/external/libFRI/src/client_lbr -I/home/ajay/ros2_ws/src/iiwa_ros2/iiwa_hardware/external/libFRI/src/base -I/opt/ros/humble/include -isystem /opt/ros/humble/include/pluginlib -isystem /opt/ros/humble/include/rclcpp -isystem /opt/ros/humble/include/rclcpp_lifecycle -isystem /opt/ros/humble/include/control_msgs -isystem /opt/ros/humble/include/lifecycle_msgs -isystem /opt/ros/humble/include/rcpputils -isystem /opt/ros/humble/include/rcutils -isystem /opt/ros/humble/include/ament_index_cpp -isystem /opt/ros/humble/include/class_loader -isystem /opt/ros/humble/include/libstatistics_collector -isystem /opt/ros/humble/include/builtin_interfaces -isystem /opt/ros/humble/include/rosidl_runtime_c -isystem /opt/ros/humble/include/rosidl_typesupport_interface -isystem /opt/ros/humble/include/fastcdr -isystem /opt/ros/humble/include/rosidl_runtime_cpp -isystem /opt/ros/humble/include/rosidl_typesupport_fastrtps_cpp -isystem /opt/ros/humble/include/rmw -isystem /opt/ros/humble/include/rosidl_typesupport_fastrtps_c -isystem /opt/ros/humble/include/rosidl_typesupport_introspection_c -isystem /opt/ros/humble/include/rosidl_typesupport_introspection_cpp -isystem /opt/ros/humble/include/rcl -isystem /opt/ros/humble/include/rcl_interfaces -isystem /opt/ros/humble/include/rcl_logging_interface -isystem /opt/ros/humble/include/rcl_yaml_param_parser -isystem /opt/ros/humble/include/libyaml_vendor -isystem /opt/ros/humble/include/tracetools -isystem /opt/ros/humble/include/statistics_msgs -isystem /opt/ros/humble/include/rosgraph_msgs -isystem /opt/ros/humble/include/rosidl_typesupport_cpp -isystem /opt/ros/humble/include/rosidl_typesupport_c -isystem /opt/ros/humble/include/rcl_lifecycle -isystem /opt/ros/humble/include/action_msgs -isystem /opt/ros/humble/include/unique_identifier_msgs -isystem /opt/ros/humble/include/geometry_msgs -isystem /opt/ros/humble/include/std_msgs -isystem /opt/ros/humble/include/sensor_msgs -isystem /opt/ros/humble/include/trajectory_msgs

CXX_FLAGS = -O3 -DNDEBUG -fPIC   -fPIC -Wall -Wextra
