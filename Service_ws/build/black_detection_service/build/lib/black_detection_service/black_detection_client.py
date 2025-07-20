#!/usr/bin/env python3
"""
黑色物体检测服务客户端
用于测试黑色物体检测服务
"""

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from black_detection_interfaces.srv import DetectBlackObjects
import cv2
import numpy as np
from cv_bridge import CvBridge
import sys


class BlackDetectionClient(Node):
    def __init__(self):
        super().__init__('black_detection_client')
        self.cli = self.create_client(DetectBlackObjects, 'detect_black_objects')
        self.bridge = CvBridge()
        
        # 等待服务可用
        while not self.cli.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('等待服务可用...')
        
        self.req = DetectBlackObjects.Request()

    def send_request(self, image_path, black_threshold=30.0, min_area=100.0, max_area=10000.0):
        """发送检测请求"""
        # 读取图像
        cv_image = cv2.imread(image_path)
        if cv_image is None:
            self.get_logger().error(f'无法读取图像: {image_path}')
            return None
            
        # 转换为ROS图像消息
        ros_image = self.bridge.cv2_to_imgmsg(cv_image, encoding="bgr8")
        
        # 设置请求参数
        self.req.image = ros_image
        self.req.black_threshold = black_threshold
        self.req.min_area = min_area
        self.req.max_area = max_area
        
        # 发送请求
        self.future = self.cli.call_async(self.req)
        rclpy.spin_until_future_complete(self, self.future)
        
        return self.future.result()

    def display_results(self, cv_image, response):
        """显示检测结果"""
        if not response.success:
            self.get_logger().error(f'检测失败: {response.message}')
            return
            
        # 在图像上绘制检测结果
        result_image = cv_image.copy()
        
        for i, (centroid, size) in enumerate(zip(response.centroids, response.sizes)):
            # 绘制中心点
            center = (int(centroid.x), int(centroid.y))
            cv2.circle(result_image, center, 5, (0, 0, 255), -1)
            
            # 绘制边界框
            width = int(size.x)
            height = int(size.y)
            x = int(centroid.x - width/2)
            y = int(centroid.y - height/2)
            
            cv2.rectangle(result_image, (x, y), (x + width, y + height), (0, 255, 0), 2)
            
            # 添加标签
            label = f"Black {i+1}"
            cv2.putText(result_image, label, (x, y-10), 
                       cv2.FONT_HERSHEY_SIMPLEX, 0.5, (0, 255, 0), 2)
        
        # 显示结果
        cv2.imshow('Black Object Detection Results', result_image)
        cv2.waitKey(0)
        cv2.destroyAllWindows()
        
        # 打印检测信息
        self.get_logger().info(f'检测到 {response.count} 个黑色物体')
        for i, (centroid, size) in enumerate(zip(response.centroids, response.sizes)):
            self.get_logger().info(f'物体 {i+1}: 中心({centroid.x:.1f}, {centroid.y:.1f}), 尺寸({size.x:.1f}x{size.y:.1f})')


def main():
    rclpy.init()
    
    if len(sys.argv) < 2:
        print("使用方法: ros2 run black_detection_service black_detection_client <图像路径> [黑色阈值] [最小面积] [最大面积]")
        print("示例: ros2 run black_detection_service black_detection_client test.jpg 30 100 10000")
        return
    
    client = BlackDetectionClient()
    
    try:
        # 解析参数
        image_path = sys.argv[1]
        black_threshold = float(sys.argv[2]) if len(sys.argv) > 2 else 30.0
        min_area = float(sys.argv[3]) if len(sys.argv) > 3 else 100.0
        max_area = float(sys.argv[4]) if len(sys.argv) > 4 else 10000.0
        
        # 读取图像用于显示
        cv_image = cv2.imread(image_path)
        if cv_image is None:
            print(f'错误: 无法读取图像 {image_path}')
            return
            
        # 发送检测请求
        response = client.send_request(image_path, black_threshold, min_area, max_area)
        
        if response is not None:
            client.display_results(cv_image, response)
        
    except KeyboardInterrupt:
        pass
    except Exception as e:
        print(f'错误: {e}')
    finally:
        client.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
