//
// Created by 杨敬华 on 2022/10/30.
//指针常量   常量指针  常量指针常量
#include "iostream"
#include "string.h"

using namespace std;

int main() {
//    指针常量
    int number = 9;
    int number2 = 8;
//    常量指针
    const int *numberP1 = &number;
//    * numberP1 = 100; // 报错了不允许修改常量指针 存放地址所对应的值。
    numberP1 = &number2; //允许重新指向常量指针存放的地址
//    指针常量
    int *const numberP2 = &number;
    *numberP2 = 11; // 允许修改指针常量
//     * numberP2 = &number2； //报错 不允许重新指向指针常量存放的地址。
//常量指针常量
    const int *const numberP3 = &number;
//    *numberP3 = &number2; //报错 不允许修改常量指针常量 存放的地址所对应的值
//    *numberP3 = 1; // 报错  不允许重新指向 指针常量 存放的地址。
    return 0;
}
