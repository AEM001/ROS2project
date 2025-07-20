# 单个黑色物体的信息
std_msgs/Header header           # 时间戳和坐标系
geometry_msgs/Point centroid     # 物体中心点坐标(像素坐标)
geometry_msgs/Point32 size       # 物体尺寸(宽度和高度)
float32 area                     # 物体面积(像素)
float32 confidence               # 检测置信度(0-1)
