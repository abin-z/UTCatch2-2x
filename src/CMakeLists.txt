# 添加静态库
add_library(addfunc add.cpp)

target_include_directories(addfunc PUBLIC ${CMAKE_CURRENT_LIST_DIR})