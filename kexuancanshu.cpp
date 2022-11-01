//
// Created by 杨敬华 on 2022/11/1.
//
#include "iostream"
#include "stdarg.h"
using namespace std;
//可变参数
void sun(int count ,...){
    va_list  vp;
    va_start(vp,count); //开始位置
//    到这里vp就已经有丰富的值了。
    int number = va_arg(vp,int);//取出可变参数的一个值  第二个参数规定类型
    cout <<number<<endl;
    va_end(vp);//关闭阶段
}
int main12sf(){
    sun(1,2,3,4,4,4,4,5 ,5,90,56,6,1);
    return 0;
}
