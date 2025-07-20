# 请求：检测黑色物体
sensor_msgs/Image image          # 输入图像
float32 black_threshold          # 黑色阈值(0-255)，值越小检测越严格的黑色
float32 min_area                 # 最小检测面积(像素)
float32 max_area                 # 最大检测面积(像素)

