import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/mac/dev_ws/omo_robot/install/omo_r1_teleop'
