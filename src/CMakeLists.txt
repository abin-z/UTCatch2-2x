# 创建静态库 addfunc，将 add.cpp 文件编译为静态库
# addfunc 是库的名称，add.cpp 是源文件
add_library(addfunc STATIC add.cpp)

# 设置 addfunc 库的头文件目录
# PUBLIC 表示该头文件目录不仅对 addfunc 库本身有效，还对链接该库的其他目标有效
# ${CMAKE_CURRENT_LIST_DIR} 是当前 CMakeLists.txt 所在的目录，通常用于定位当前项目的源文件目录
target_include_directories(addfunc PUBLIC ${CMAKE_CURRENT_LIST_DIR})
