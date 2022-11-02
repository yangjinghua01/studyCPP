//
// Created by 杨敬华 on 2022/11/2.
//
#include "iostream"

using namespace std;

class Object {
public:
    int number;
};

class BaseActivity1 : public Object {

};

class BaseActivity2 : public Object {

};

class Son : public BaseActivity1, BaseActivity2 {
public:
    int number;
};

int mainklsadk() {
    Son son;
//    1
    son.BaseActivity1::number = 1;
//    2
    son.number = 2;
//    3 虚基类
    return 0;
}
