import rclpy
from rclpy.node import Node
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from builtin_interfaces.msg import Duration

def main(args=None):
    rclpy.init(args=args)
    node = Node("command_publisher_node")

    publisher = node.create_publisher(JointTrajectory, '/iiwa_arm_controller/joint_trajectory', 10)

    joint_trajectory = JointTrajectory()
    joint_trajectory.joint_names = ['joint_a1', 'joint_a2', 'joint_a3', 'joint_a4', 'joint_a5', 'joint_a6', 'joint_a7']

    point = JointTrajectoryPoint()
    point.positions = [0.785, 0.95, 0.785, 0.785, 0.785, 0.785, 0.785]
    point.velocities = [0.5, 0.5, 0.5, 0.5, 0.5, 0.5, 0.5]
    point.time_from_start = Duration(sec=1, nanosec=0)

    joint_trajectory.points.append(point)


    while rclpy.ok():
        publisher.publish(joint_trajectory)
        node.get_logger().info('Publishing: %s' % joint_trajectory)
        rclpy.spin_once(node)
        node.sleep(1.0)  

    rclpy.shutdown()

if __name__ == '__main__':
    main()
