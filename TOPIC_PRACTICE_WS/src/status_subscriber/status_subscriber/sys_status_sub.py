import rclpy
from rclpy.node import Node
from status_interfaces.msg import SystemStatus
from PyQt5.QtWidgets import QApplication, QMainWindow, QVBoxLayout, QLabel, QWidget
from PyQt5.QtCore import QTimer
import sys

class SystemStatusWindow(QMainWindow):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("系统状态监控")
        self.setGeometry(100, 100, 400, 300)

        central_widget = QWidget()
        self.setCentralWidget(central_widget)
        layout = QVBoxLayout(central_widget)

        self.host_name_label = QLabel("主机名：")
        self.cpu_label = QLabel("CPU使用率：")
        self.memory_label = QLabel("内存使用率：")
        self.memory_total_label = QLabel("总内存：")
        self.memory_available_label = QLabel("可用内存：")
        self.net_sent_label = QLabel("网络发送：")
        self.net_recv_label = QLabel("网络接收：")

        layout.addWidget(self.host_name_label)
        layout.addWidget(self.cpu_label)
        layout.addWidget(self.memory_label)
        layout.addWidget(self.memory_total_label)
        layout.addWidget(self.memory_available_label)
        layout.addWidget(self.net_sent_label)
        layout.addWidget(self.net_recv_label)

    def update_status(self, msg):
        self.host_name_label.setText(f"主机名：{msg.host_name}")
        self.cpu_label.setText(f"CPU使用率：{msg.cpu_percent:.1f}%")
        self.memory_label.setText(f"内存使用率：{msg.memory_percent:.1f}%")
        self.memory_total_label.setText(f"总内存：{msg.memory_total:.1f} MB")
        self.memory_available_label.setText(f"可用内存：{msg.memory_available:.1f} MB")
        self.net_sent_label.setText(f"网络发送：{msg.net_sent:.2f} MB")
        self.net_recv_label.setText(f"网络接收：{msg.net_recv:.2f} MB")

class SubscriberNode(Node):
    def __init__(self, status_window):
        super().__init__('subscriber_node')
        self.subscription = self.create_subscription(
            SystemStatus, 'sys_status', self.callback, 10)
        self.status_window = status_window

    def callback(self, msg):
        self.get_logger().info('收到消息')
        self.status_window.update_status(msg)

def main(args=None):
    rclpy.init(args=args)
    app = QApplication(sys.argv)
    status_window = SystemStatusWindow()
    node = SubscriberNode(status_window)

    timer = QTimer()
    timer.timeout.connect(lambda: rclpy.spin_once(node, timeout_sec=0))
    timer.start(100)  # 每100ms处理一次ROS消息

    status_window.show()
    app.exec_()

    rclpy.shutdown()

if __name__ == '__main__':
    main()

# ​**​第二​**​ 要有一个简单的界面，可以将系统信息显示出来。