cmake_minimum_required(VERSION 3.19)
project(untitled2)

set(CMAKE_CXX_STANDARD 14)
# 存在头文件就要倒入实现文件。
# 编译可执行文件 你没有把实现文件导入进去
add_executable(untitled2 main.cpp t3.c T4.cpp T5.cpp changliangyinyong.cpp chanshuchongzai.c hanshuchongzai.cpp obj.cpp Student.h Student.cpp diyname.cpp 构造函数.cpp 拷贝构造函数.cpp)