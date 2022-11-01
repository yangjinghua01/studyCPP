//
// Created by 杨敬华 on 2022/11/1.
//
#include "iostream"

using namespace std;

class Dog {
public:
    char *info;
    int age;
//    已经编译不成功不允许这样
    static int id;

    Dog() {

    }
    static void update(){
        id =9;
    }
};
int main111(){
    Dog dog;
    Dog::update();
    return 0;
}