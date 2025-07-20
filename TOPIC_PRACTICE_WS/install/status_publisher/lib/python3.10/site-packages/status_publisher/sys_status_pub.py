
import rclpy
from rclpy.node import Node
from status_interfaces.msg import SystemStatus  # 导入自定义消息接口
import psutil  # 用于获取系统信息
import platform  # 用于获取主机名

class PublisherNode(Node):
    def __init__(self):
        super().__init__('publisher_node')
        # 创建发布者，使用SystemStatus消息类型，话题名称为'sys_status'，队列大小为10
        self.publisher = self.create_publisher(SystemStatus, 'sys_status', 10)
        # 创建定时器，每1秒调用一次timer_callback函数
        self.timer = self.create_timer(1.0, self.timer_callback)

    def timer_callback(self):
        """定时器回调函数，每当定时器到达设定的时间间隔，就会自动调用一次这个函数"""
        # 获取系统状态信息
        cpu_percent = psutil.cpu_percent()  # CPU使用率
        memory_info = psutil.virtual_memory()  # 内存信息
        net_io_counters = psutil.net_io_counters()  # 网络IO信息
        
        # 创建SystemStatus消息对象
        msg = SystemStatus()
        
        # 填充消息数据
        msg.stamp = self.get_clock().now().to_msg()  # 记录信息的时间
        msg.host_name = platform.node()  # 主机名称
        msg.cpu_percent = cpu_percent  # CPU使用率
        msg.memory_percent = memory_info.percent  # 内存使用率
        msg.memory_total = memory_info.total / 1024 / 1024  # 内存总大小（转换为MB）
        msg.memory_available = memory_info.available / 1024 / 1024  # 剩余内存（转换为MB）
        msg.net_sent = net_io_counters.bytes_sent / 1024 / 1024  # 网络发送数据量（转换为MB）
        msg.net_recv = net_io_counters.bytes_recv / 1024 / 1024  # 网络接收数据量（转换为MB）
        
        # 发布消息
        self.publisher.publish(msg)
        
        # 打印日志信息
        self.get_logger().info(f'发布系统状态: CPU={cpu_percent:.1f}%, 内存={memory_info.percent:.1f}%')

def main():
    rclpy.init()  # 初始化ROS2客户端库
    node = PublisherNode()
    rclpy.spin(node)  # 让节点保持运行
    rclpy.shutdown()

if __name__ == '__main__':
    main()


 


