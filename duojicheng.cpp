//
// Created by 杨敬华 on 2022/11/2.
//
#include "iostream"

using namespace std;

class BaseActivit1 {
public:
    void onCreat() {
        cout << "BaseActivit1 onceat" << endl;
    }

    void onStart() {
        cout << "BaseActivit1 onStart" << endl;
    }

    void show() {
        cout << "BaseActivit2 show" << endl;
    }
};

class BaseActivit2 {
public:
    void onCreat() {
        cout << "BaseActivit1 onceat" << endl;
    }

    void onStart() {
        cout << "BaseActivit1 onStart" << endl;
    }

    void show() {
        cout << "BaseActivit1 show" << endl;
    }
};

class BaseActivit3 {
public:
    void onCreat() {
        cout << "BaseActivit3 onceat" << endl;
    }

    void onStart() {
        cout << "BaseActivit3 onStart" << endl;
    }

    void show() {
        cout << "BaseActivit3 show" << endl;
    }
};

class Mainactivity : public BaseActivit1, public BaseActivit2, public BaseActivit3 {
public:
    void onCreat() {
        cout << "Mainactivity onceat" << endl;
    }

    void onStart() {
        cout << "Mainactivity onStart" << endl;
    }

    void show() {
        cout << "BaseActivit3 show" << endl;
    }
};

int mainhhhjj() {
    Mainactivity mainactivity;
    mainactivity.onCreat();
    mainactivity.onStart();
//    mainactivity.show();//报错 不明确产生了二义性了
//方案一
    mainactivity.BaseActivit1::show();
//    方案二 重写父类的show
    mainactivity.show();
    return 0;
}
