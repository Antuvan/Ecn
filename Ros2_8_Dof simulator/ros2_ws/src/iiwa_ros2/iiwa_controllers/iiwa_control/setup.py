from setuptools import setup

package_name = 'iiwa_control'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=[
        'setuptools',
        'rclpy',
        'trajectory_msgs',
        'std_msgs',
        # Add any additional Python dependencies here if needed
    ],
    zip_safe=True,
    maintainer='Your Name',
    maintainer_email='your_email@example.com',
    description='ROS 2 package for controlling iiwa arm',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'command_publisher_node = iiwa_control.command_publisher_node:main',
            # Replace `command_publisher_node` with your actual node script name
        ],
    },
)
