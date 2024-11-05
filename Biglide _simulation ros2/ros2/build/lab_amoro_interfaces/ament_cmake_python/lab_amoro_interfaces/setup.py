from setuptools import find_packages
from setuptools import setup

setup(
    name='lab_amoro_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('lab_amoro_interfaces', 'lab_amoro_interfaces.*')),
)
