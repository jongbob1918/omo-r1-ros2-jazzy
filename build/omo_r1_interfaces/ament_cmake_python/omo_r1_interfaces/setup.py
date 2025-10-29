from setuptools import find_packages
from setuptools import setup

setup(
    name='omo_r1_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('omo_r1_interfaces', 'omo_r1_interfaces.*')),
)
