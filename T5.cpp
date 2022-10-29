//
// Created by 杨敬华 on 2022/10/29.
//
#include "iostream"

using namespace std;

void nmberchanger(int *number1, int *number2) {
    int temp = 0;
    temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}

//c++ 提倡的引用
void numberchange2(int &number1, int &number2) {
//    如果不采用引用，内存地址是不一样的
//    如果采用引用内存地址是一样的
    cout << "numberchange2函数" << "n1的地址：" << &number1 << ",n2的地址：" << &number2 << endl;
    int temp = 0;
    temp = number1;
    number1 = number2;
    number2 = temp;
}

int maincc() {
    int number1 = 10;
    int number2 = 20;
    cout << "main函数" << "n1的地址：" << &number1 << ",n2的地址：" << &number2 << endl;
//    nmberchanger(&number1,&number2);
    cout << "n1:" << number1 << ",n2:" << number2 << endl;
    numberchange2(number1, number2);
    cout << "n1:" << number1 << ",n2:" << number2 << endl;

    cout << endl;
    int n1 = 999;
    int n2 = 888;
    int &n3 = n1;
    cout << &n1<<"------"<< &n2<<endl;
    cout << &n1<<"------"<< &n3<<endl;

    return 0;

}