cmake_minimum_required(VERSION 3.8)
project(black_detection_interfaces)

# 检查C++编译器
if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# 查找依赖
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)

# 定义消息和服务文件
set(msg_files
  "msg/BlackObject.msg"
  "msg/BlackObjectArray.msg"
)

set(srv_files
  "srv/DetectBlackObjects.srv"
)

# 生成消息和服务
rosidl_generate_interfaces(${PROJECT_NAME}
  ${msg_files}
  ${srv_files}
  DEPENDENCIES std_msgs geometry_msgs sensor_msgs
  ADD_LINTER_TESTS
)

# 导出依赖
ament_export_dependencies(rosidl_default_runtime)
ament_package()
