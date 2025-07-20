from setuptools import find_packages
from setuptools import setup

setup(
    name='black_detection_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('black_detection_interfaces', 'black_detection_interfaces.*')),
)
