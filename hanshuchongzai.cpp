//
// Created by 杨敬华 on 2022/10/29.
// c++ 函数重载
#include "iostream"
using namespace std;
//java 构造函数有50个字段 我真正使用的就只有5个
//处理方案使用 建造者设计模式也就是链式调用
// 默认形参赋值 类似dart中的可选参数  调用函数的时候有默认星灿的优先级高
int add(int n1 = 1,int n2 =2,bool isok = 0){
    return n1+n2;
}
int  add(int &number1,int &number2){
    return number1 + number2;
}
int  add(int &number1,int &number2,int &number3){
    return number1 + number2+number3;
}
int main22(){

    return 0;
}
