set(tgt_name test01)

# 添加测试可执行文件，将 test01.cpp 作为源文件
add_executable(${tgt_name} test01.cpp)

# 链接被测库 addfunc，确保 test01 能够调用 addfunc 提供的函数
target_link_libraries(${tgt_name} PRIVATE addfunc)
# 链接 Catch2 测试框架库，确保测试用例能够使用 Catch2 提供的功能
target_link_libraries(${tgt_name} PRIVATE Catch2::Catch2)

# 注册 test01 作为 CTest 可识别的测试用例
# 当执行 `ctest` 时，会运行 test01 并检查其返回值
add_test(NAME ${tgt_name} COMMAND ${tgt_name})
