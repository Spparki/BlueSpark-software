from setuptools import find_packages
from setuptools import setup

setup(
    name='auv_control_msgs',
    version='0.0.1',
    packages=find_packages(
        include=('auv_control_msgs', 'auv_control_msgs.*')),
)
