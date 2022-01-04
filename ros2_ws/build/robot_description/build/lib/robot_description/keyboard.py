#! /usr/bin/env python

import sys
from time import sleep
import rclpy
from rclpy.node import Node
from std_srvs.srv import *
from geometry_msgs.msg import Twist
from pynput import keyboard
from msgs_package.srv import *

keyboard_node = None
listener = None
class KeyboardNode(Node):
    def __init__(self):
        super().__init__('keyboard')      ## initialize node
        self.active_ = False
        self.keyboard_service = None
        self.user_input_service_client = None
        self.pub = self.create_publisher(Twist, "/cmd_vel", 1)

        self.init_keyboard_service()
        self.init_user_input_client()

    
    def init_keyboard_service(self):
        self.keyboard_service = self.create_service(SetBool,'keyboard_service', self.keyboard_service_callback)
    def init_user_input_client(self):
        self.user_input_service_client = self.create_client(SetBool, '/user_input')
        while not self.user_input_service_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('KEYBOARD:: User input service is not available, waiting again...')
    def call_user_input_srv(self, data):
        req = SetBool.Request()
        req.data = data
        self.user_input_service_client.call_async(req)
    def keyboard_service_callback(self, req, resp):
        if (self.active_ and not req.data) or (not self.active_ and req.data):
            self.active_ = req.data
            self.activate_listener(self.active_)
        resp.success = True
        resp.message = 'Done!'
        return resp

    def activate_listener(self, stat):
        self.active_ = stat
        if self.active_:
            self.get_logger().info('KEYBOARD:: KEYBOARD Service Activated!')
            self.get_logger().info('KEYBOARD:: #####################################################')
            self.get_logger().info('KEYBOARD:: Control the robot using Arrow keys on   the keyboard.')
            self.get_logger().info('KEYBOARD:: Press R key for random position and ESC   to  escape.')
            self.get_logger().info('KEYBOARD:: To stop robot anytime, press ESC to get new position.')
            self.get_logger().info('KEYBOARD:: #####################################################')
        else:
            self.get_logger().info('KEYBOARD:: KEYBOARD Service Deactivated!')
    def go_straight(self):
        twist_msg = Twist()
        twist_msg.linear.x = 0.5
        twist_msg.angular.z = 0.0
        self.pub.publish(twist_msg)
        return True
    def go_backward(self):
        twist_msg = Twist()
        twist_msg.linear.x = -0.5
        twist_msg.angular.z = 0.0
        self.pub.publish(twist_msg)
        return True
    def turn_left(self):
        twist_msg = Twist()
        twist_msg.linear.x = 0.0
        twist_msg.angular.z = -0.5
        self.pub.publish(twist_msg)
        return True
    def turn_right(self):
        twist_msg = Twist()
        twist_msg.linear.x = 0.0
        twist_msg.angular.z = 0.5
        self.pub.publish(twist_msg)
        return True
    def stop_robot(self):
        twist_msg = Twist()
        twist_msg.linear.x = 0.0
        twist_msg.angular.z = 0.0
        self.pub.publish(twist_msg)
        return True    

def on_release(key):
    global keyboard_node, listener
    if  keyboard_node.active_:
        keyboard_node.stop_robot()
    elif key == keyboard.Key.esc:
        keyboard_node.activate_listener(False)
        keyboard_node.stop_robot()
        keyboard_node.call_user_input_srv(True)
    return True

def on_press(key):
    global keyboard_node, listener
    if  keyboard_node.active_:
        try:
            if key == keyboard.KeyCode(char='r') or key == keyboard.KeyCode(char='R'):
                # deactivate user control
                keyboard_node.activate_listener(False)
                keyboard_node.call_user_input_srv(True)
            elif key == keyboard.Key.up:
                keyboard_node.go_straight()
            elif key == keyboard.Key.down:
                keyboard_node.go_backward()
            elif key == keyboard.Key.left:
                keyboard_node.turn_left()
            elif key == keyboard.Key.right:
                keyboard_node.turn_right()
        except AttributeError:
            pass
    return True

def main(args=None):
    global keyboard_node,listener
    rclpy.init(args=args)
    keyboard_node = KeyboardNode()

    listener = keyboard.Listener( on_press = on_press, on_release = on_release)
    listener.start()

    rclpy.spin(keyboard_node)

if __name__ == '__main__':
    main()
