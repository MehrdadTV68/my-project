from setuptools import setup

package_name = 'robot_description'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='mpt',
    maintainer_email='f.n.heravi@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
        	'random_position_generator = robot_description.random_generator_service:main',
            'user_input = robot_description.user_input:main',
            'keyboard = robot_description.keyboard:main',
        ],
    },
)
