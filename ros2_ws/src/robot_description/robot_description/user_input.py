#! /usr/bin/env python

import sys
from time import sleep
import rclpy
from rclpy.node import Node
from std_srvs.srv import *
from geometry_msgs.msg import Twist
from pynput import keyboard
from msgs_package.srv import *

class MyNode(Node):
    def __init__(self):
        super().__init__('user_input')      ## initialize node
        self.active_ = False
        self.position_future = None


        self.init_user_input_switch()
        self.init_user_input_switch_bugside()
        self.init_keyboard_service_client()
        self.init_position_generator_srv_client()
        self.init_bug_srv_client()

        
    def init_user_input_switch(self):
        self.user_input_switch_srv_ = self.create_service(SetBool,'user_input', self.user_input_switch_callback)
    def init_user_input_switch_bugside(self):
        self.user_input_switch_srv2_ = self.create_service(SetBool,'user_input2', self.user_input_switch_callback2)

    def init_bug_srv_client(self):
        self.bug_srv = self.create_client(BugService, '/bug_service')
        while not self.bug_srv.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Bug_srv is not available, waiting again...')
    def init_keyboard_service_client(self):
        self.keyboard_srv_cli = self.create_client(SetBool, '/keyboard_service')
        while not self.keyboard_srv_cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Keyboard Service is not available, waiting again...')
    def call_keyboard_service(self, data):
        req = SetBool.Request()
        req.data = data
        self.keyboard_srv_cli.call_async(req)
    def call_bug_srv(self, data, x, y):
        self.set_bool_message = BugService.Request()
        self.set_bool_message.data = data
        self.set_bool_message.x = x
        self.set_bool_message.y = y
        self.bug_srv.call_async(self.set_bool_message)
    def user_input_switch_callback(self, req, resp):
        if req.data:
            self.send_req_to_position_generator(True)
        resp.success = True
        resp.message = 'Done!'
        return resp
    def user_input_switch_callback2(self, req, resp):
        if req.data:
            self.call_keyboard_service(True)

        resp.success = True
        resp.message = 'Done!'
        return resp
    def init_position_generator_srv_client(self):
        self.random_position_client_ = self.create_client(RandomPosition, '/random_position_generator_service')
        while not self.random_position_client_.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Random position service is not available, waiting again...')
        return True
    def send_req_to_position_generator(self, data):
        if data:
            self.pos_request_message = RandomPosition.Request()
            self.pos_request_message.request = data
            self.position_future =  self.random_position_client_.call_async(self.pos_request_message)
            self.get_logger().info('USER INPUT:: Random Position Generation Called.')


def main(args=None):
    rclpy.init(args=args)
    my_node = MyNode()

    #rate = my_node.create_rate(20)
    while rclpy.ok():
        rclpy.spin_once(my_node)
        if my_node.position_future is not None and my_node.position_future.done():
            res = my_node.position_future.result()
            my_node.call_bug_srv(True, res.x, res.y)
            my_node.position_future = None
        #rate.sleep()

if __name__ == '__main__':
    main()
