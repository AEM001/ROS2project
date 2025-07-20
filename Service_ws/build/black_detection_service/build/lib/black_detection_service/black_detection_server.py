#!/usr/bin/env python3
"""
黑色物体检测服务节点
提供图像中黑色物体检测的服务
"""

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from cv_bridge import CvBridge
import cv2
import numpy as np
from black_detection_interfaces.srv import DetectBlackObjects
from typing import List, Tuple


class BlackDetectionServer(Node):
    def __init__(self):
        super().__init__('black_detection_server')
        
        # 创建服务
        self.srv = self.create_service(
            DetectBlackObjects,
            'detect_black_objects',
            self.detect_black_objects_callback
        )
        
        # 创建CvBridge实例
        self.bridge = CvBridge()
        
        # 默认参数
        self.declare_parameter('min_area', 100)
        self.declare_parameter('max_area', 10000)
        self.declare_parameter('black_threshold', 50)
        
        self.get_logger().info('黑色物体检测服务已启动')

    def detect_black_objects_callback(self, request, response):
        """服务回调函数：检测图像中的黑色物体"""
        try:
            # 将ROS图像消息转换为OpenCV格式
            cv_image = self.bridge.imgmsg_to_cv2(request.image, desired_encoding='bgr8')
            
            # 获取参数
            min_area = self.get_parameter('min_area').value
            max_area = self.get_parameter('max_area').value
            black_threshold = self.get_parameter('black_threshold').value
            
            # 检测黑色物体
            black_objects = self.detect_black_objects(
                cv_image, 
                min_area, 
                max_area, 
                black_threshold
            )
            
            # 填充响应
            response.objects = black_objects
            response.success = True
            response.message = f"成功检测到 {len(black_objects)} 个黑色物体"
            
            self.get_logger().info(f"检测到 {len(black_objects)} 个黑色物体")
            
        except Exception as e:
            response.success = False
            response.message = f"检测失败: {str(e)}"
            self.get_logger().error(f"检测失败: {str(e)}")
        
        return response

    def detect_black_objects(self, image: np.ndarray, min_area: int, max_area: int, 
                           black_threshold: int) -> List[DetectBlackObjects.Object]:
        """检测图像中的黑色物体"""
        # 转换为灰度图
        gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
        
        # 创建黑色掩码
        _, black_mask = cv2.threshold(gray, black_threshold, 255, cv2.THRESH_BINARY_INV)
        
        # 形态学操作去除噪声
        kernel = np.ones((5, 5), np.uint8)
        black_mask = cv2.morphologyEx(black_mask, cv2.MORPH_CLOSE, kernel)
        black_mask = cv2.morphologyEx(black_mask, cv2.MORPH_OPEN, kernel)
        
        # 查找轮廓
        contours, _ = cv2.findContours(black_mask, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)
        
        objects = []
        
        for contour in contours:
            area = cv2.contourArea(contour)
            
            # 根据面积过滤
            if min_area <= area <= max_area:
                # 获取边界框
                x, y, w, h = cv2.boundingRect(contour)
                
                # 计算质心
                M = cv2.moments(contour)
                if M["m00"] != 0:
                    cx = int(M["m10"] / M["m00"])
                    cy = int(M["m01"] / M["m00"])
                else:
                    cx = x + w // 2
                    cy = y + h // 2
                
                # 创建物体信息
                obj = DetectBlackObjects.Object()
                obj.x = int(x)
                obj.y = int(y)
                obj.width = int(w)
                obj.height = int(h)
                obj.center_x = int(cx)
                obj.center_y = int(cy)
                obj.area = float(area)
                
                objects.append(obj)
        
        return objects


def main(args=None):
    rclpy.init(args=args)
    
    black_detection_server = BlackDetectionServer()
    
    try:
        rclpy.spin(black_detection_server)
    except KeyboardInterrupt:
        pass
    finally:
        black_detection_server.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
