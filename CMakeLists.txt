# 指定CMake最低版本要求
cmake_minimum_required(VERSION 3.20)

# 设置默认构建类型为Release，如果未指定构建类型
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

# 设置C++标准版本为C++11，并确保严格要求此标准，不使用扩展功能
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# 设置输出路径：库文件、可执行文件和归档文件的生成目录
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/build_output/lib) # 静态库 (.a/.lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/build_output/bin) # 动态库 (.so/.dll)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/build_output/bin) # 可执行文件

# 声明项目名称和支持的语言，同时指定版本号
project(testdemo LANGUAGES C CXX VERSION 0.1.1)

# 设置位置无关代码 (PIC)，对于动态库来说是必须的
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# 启用测试功能
include(CTest)  # 启用 CTest 框架
enable_testing()  # 允许 add_test() 添加测试

# 添加子目录
add_subdirectory(dep)
add_subdirectory(src)
add_subdirectory(tests)

