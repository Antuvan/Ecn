import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/ajay/Documents/ECn/Master2/Amoro/lab/ros2/install/lab_amoro'
