from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='robot_description',
            executable='random_position_generator',
            name='random_position_generator'
        ),
        Node(
            package='robot_description',
            executable='user_input',
            name='user_input'
        ),
        Node(
            package='robot_description',
            executable='keyboard',
            name='keyboard'
        )
    ])