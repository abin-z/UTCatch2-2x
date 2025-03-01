## C++程序单元测试DEMO
记录如何使用Ctest调用Catch2单元测试框架进行自动化测试

#### 单元测试框架Catch2

- 使用的是易于使用的Catch2 2.x版本, 这是一个head-only的测试框架.
- 该测试框架只需要将`catch.hpp`添加到项目中就可以进行测试了
  > Catch2的3.x版本已经不是head-only的了, 和一个正常的lib库差不多.

[Catch2 v2.x 官方文档](https://github.com/catchorg/Catch2/tree/v2.x)

[Catch2 官方文档](https://github.com/catchorg/Catch2)

#### 项目目录结构

项目目录结构:

- `dep` 为依赖库文件夹, 包含Catch2框架
- `src` 为正常的库代码文件, 包含待测试的库或者程序
- `tests` 为测试文件夹, 里面包含测试用例

```cpp
.
├── CMakeLists.txt
├── dep
│   ├── Catch2
│   │   └── catch.hpp
│   └── CMakeLists.txt
├── LICENSE
├── README.md
├── src
│   ├── add.cpp
│   ├── add.h
│   └── CMakeLists.txt
└── tests
    ├── CMakeLists.txt
    └── test01.cpp
```

> CTest的基本使用可以看项目中的CMakeLists.txt
>
> Catch2测试框架的使用可以看[test01.cpp](./tests/test01.cpp)