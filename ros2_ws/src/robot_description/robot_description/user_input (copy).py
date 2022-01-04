#! /usr/bin/env python

import sys
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
        self.bug_srv = None
        self.random_position_client_ = None
        self.first_run = True
        self.listener = None

        self.init_user_input_switch()
        self.init_position_generator_srv()
        self.pub = self.create_publisher(Twist, "/cmd_vel", 1)

        self.pos_request_message = None
        self.set_bool_message = None
        self.position_future = None
        self.bugsrv_future = None

        self.init_bug_srv()
        self.activate_listener(False)


    def init_bug_srv(self):
        self.get_logger().info('init_bug_srv started!')
        self.bug_srv = self.create_client(BugService, '/bug_service')
        while not self.bug_srv.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Bug_srv is not available, waiting again...')
        self.get_logger().info('init_bug_srv ended!')

    def send_req_to_position_generator(self, data):
        self.get_logger().info('send_req_to_position_generator started!')
        self.pos_request_message = RandomPosition.Request()
        self.pos_request_message.request = data
        self.position_future =  self.random_position_client_.call_async(self.pos_request_message)
        self.get_logger().info('sent: ' + str(self.position_future))
        if data:
            self.get_logger().info('USER INPUT:: Random Position Generation Called.')
        self.get_logger().info('send_req_to_position_generator ended!')
        return True

    def call_bug_srv(self, data, x, y):
        self.get_logger().info('call_bug_srv started!')
        self.set_bool_message = BugService.Request()
        self.set_bool_message.data = data
        self.set_bool_message.x = x
        self.set_bool_message.y = y
        self.get_logger().info('Point: ['+str(x) + ', '+ str(y) + ']')
        self.bug_srv.call_async(self.set_bool_message)
        self.get_logger().info('get_logger ended!')
        #r = self.bug_srv.call(self.set_bool_message)
        #self.get_logger().info('~~~~~~~~~~~~~~~~~~~~~~ bug srv response: ' + str(r))

    def init_user_input_switch(self):
        self.get_logger().info('call_bug_srv started!')
        self.user_input_switch_srv_ = self.create_service(SetBool,'user_input', self.user_input_switch_callback)
        self.get_logger().info('init_user_input_switch ended!')
        
    def init_position_generator_srv(self):
        self.get_logger().info('init_position_generator_srv started!')
        self.random_position_client_ = self.create_client(RandomPosition, '/random_position_generator_service')
        while not self.random_position_client_.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Random position service is not available, waiting again...')
        self.get_logger().info('init_position_generator_srv ended!')

    def user_input_switch_callback(self, req, resp):
        self.get_logger().info('user_input_switch_callback started!')
        self.get_logger().info('////////////////////// Request recieved from Bug.py /////////////////////')
        self.get_logger().info('req: ' + str(req))
        self.active_ = req.data
        #if req.data:
        resp.success = True
        resp.message = 'Done!'
        self.get_logger().info('resp: ' + str(resp))
        self.activate_listener(self.active_)
        self.get_logger().info('user_input_switch_callback ended!')
        return resp

    def activate_listener(self, stat):
        self.get_logger().info('activate_listener started! stat:' + str(stat))
        self.active_ = stat
        #if stat:
        #    #if self.first_run:
        #    self.listener = keyboard.Listener( on_press = self.on_press, on_release = self.on_release)
        #    self.listener.start()
        #    #else:
        #    #    self.listener.join()
        #    self.get_logger().info('USER INPUT:: USER INPUT Service Activated!')
        #    self.get_logger().info('USER INPUT:: ###################################################')
        #    self.get_logger().info('USER INPUT:: Control the robot using Arrow keys on the keyboard.')
        #    self.get_logger().info('USER INPUT:: Press R key for random position and ESC to  escape.')
        #    self.get_logger().info('USER INPUT:: ###################################################')
        #elif self.listener is not None:
        #    self.listener.stop()
        #    self.listener = None
        #    self.get_logger().info('USER INPUT:: USER INPUT Service Deactivated!')
        #self.get_logger().info('activate_listener ended!')
        return True

    def on_release(self, key):
        self.get_logger().info('on_release started!')
        if  self.active_:
            if key == keyboard.Key.esc:
                # Stop listener
                if self.active_:
                    self.active_ = False
                    self.activate_listener(False)
            else:
                self.stop_robot()
        self.get_logger().info('on_release ended!')
        return True

    def on_press(self, key):
        self.get_logger().info('on_press started!')
        if self.active_:
            #try:
            if key == keyboard.KeyCode(char='r') or key == keyboard.KeyCode(char='R'):
                # deactivate user control
                self.active_ = False                
                self.activate_listener(False)
                # call for random position generation
                self.send_req_to_position_generator(True)
            elif key == keyboard.Key.up:
                self.go_straight()
            elif key == keyboard.Key.down:
                self.go_backward()
            elif key == keyboard.Key.left:
                self.turn_left()
            elif key == keyboard.Key.right:
                self.turn_right()
            #except AttributeError:
            #    pass
        self.get_logger().info('on_press ended!')
        return True

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

def on_press(key):
    global my_node
    my_node.get_logger().info('on_press started!')
    if my_node.active_:
        #try:
        if key == keyboard.KeyCode(char='r') or key == keyboard.KeyCode(char='R'):
            # deactivate user control
            my_node.active_ = False                
            my_node.activate_listener(False)
            # call for random position generation
            my_node.send_req_to_position_generator(True)
        elif key == keyboard.Key.up:
            my_node.go_straight()
        elif key == keyboard.Key.down:
            my_node.go_backward()
        elif key == keyboard.Key.left:
            my_node.turn_left()
        elif key == keyboard.Key.right:
            my_node.turn_right()
        #except AttributeError:
        #    pass
    my_node.get_logger().info('on_press ended!')
    return True

def main(args=None):
    rclpy.init(args=args)
    my_node = MyNode()
    listener = None

    rate = my_node.create_rate(2)
    while rclpy.ok():
        rclpy.spin_once(my_node)
        if my_node.active_ and listener is None:
            listener = keyboard.Listener( on_press = my_node.on_press, on_release = my_node.on_release)
            listener.start()
        elif my_node.active_ is False and listener is not None:
            listener.stop()
        my_node.get_logger().info('running')
        #if my_node.position_future is not None and my_node.position_future.done():
        #    my_node.get_logger().info('inside try: ' + str(my_node.position_future))
        #   response = my_node.position_future
        #    my_node.position_future = None
        #    my_node.call_bug_srv(True, response.x, response.y)
        rate.sleep()

    my_node.get_logger().info('before shutdown!')
    rclpy.shutdown()

if __name__ == '__main__':
    main()
