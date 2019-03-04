cmake_minimum_required(VERSION 3.13)
project(Clion_CPPFoundation_Day05)

set(CMAKE_CXX_STANDARD 14)

add_executable(Clion_CPPFoundation_Day05 "01 强化训练-数组类的封装.cpp" MyArray.h MyArray.cpp MyTest.cpp MyTest.h "02 加号运算符重载.cpp" "03 左移运算符重载.cpp" "04 前置后置递增递减运算符重载.cpp" "05 指针运算符重载.cpp" "06 赋值运算符的重载.cpp")