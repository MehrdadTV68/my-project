import rclpy
from rclpy.node import Node
from msgs_package.srv import RandomPosition
from random import random
import math


class RandomService(Node):
	def __init__(self):
		self.minx_ = -8.0
		self.maxx_ = 8.0
		self.miny_ = -8.0
		self.maxy_ = 8.0

		super().__init__('random_service')		# node name
		self.srv = self.create_service(RandomPosition,'random_position_generator_service', self.callback)


	def callback(self, req, resp):
		if req.request:
			[x, y] = self.generate()
			resp.x = x
			resp.y = y
			return resp

	def generate(self):
		valuex = random()
		valuey = random()
		valuex = self.minx_ + (valuex * (self.maxx_ - self.minx_))
		valuey = self.miny_ + (valuey * (self.maxy_ - self.miny_))
		return [valuex, valuey]

def main(args=None):
	rclpy.init(args=args)
	service = RandomService()
	rclpy.spin(service)
	rclpy.shutdown()

	
if __name__ == '__main__':
	main()