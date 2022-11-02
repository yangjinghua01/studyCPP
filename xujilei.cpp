//
// Created by 杨敬华 on 2022/11/2.
//
//
// Created by 杨敬华 on 2022/11/2.
//
#include "iostream"

using namespace std;

class Object {
public:
    int number;

    void show() {
        cout << "xuxuxuux" << endl;
    }
};

//virtual 的原理
class BaseActivity1 : virtual public Object {

};

class BaseActivity2 : virtual public Object {

};

class Son : public BaseActivity1, BaseActivity2 {
public:
    int number;

};

int main() {
//    Son son;
////    1
//    son.BaseActivity1::number = 1;
////    2
//    son.number = 2;
////    3 虚基类
    Object object;
    BaseActivity1 baseActivity1;
    BaseActivity2 baseActivity2;
    Son son;
    object.number = 1;
    baseActivity1.number = 2;
    baseActivity2.number = 3;
    son.number = 333;
    son.show();
    baseActivity2.show();
    baseActivity1.show();
    object.show();
    return 0;
}

