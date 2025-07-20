

# 响应：检测结果
std_msgs/Header header           # 时间戳和坐标系
geometry_msgs/Point[] centroids  # 检测到的黑色物体中心点坐标(像素坐标)
geometry_msgs/Point32[] sizes    # 检测到的黑色物体尺寸(宽度和高度)
int32 count                      # 检测到的黑色物体数量
bool success                     # 检测是否成功
string message                   # 状态信息或错误描述
