from setuptools import setup

package_name = 'black_detection_service'

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
    maintainer='albert',
    maintainer_email='albert@todo.todo',
    description='黑色物体检测服务包',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'black_detection_server = black_detection_service.black_detection_server:main',
            'black_detection_client = black_detection_service.black_detection_client:main',
        ],
    },
)
