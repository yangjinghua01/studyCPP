//
// Created by 杨敬华 on 2022/11/1.
//

#include "pig.h"

pig::pig() {
    cout << "空餐构造" << endl;
}

pig::pig(int age) : age(age) {
    cout << "1个参数" << endl;
}

pig::pig(int age, char *name) : age(age), name(name) {
    cout << "2个参数" << endl;
}

pig::pig(char *name) : name(name) {}

pig::~pig() {
    cout << "析构构造函数" << endl;
}

int pig::getAge() const {
    return age;
}

void pig::setAge(int age) {
    pig::age = age;
}

char *pig::getName() const {
    return name;
}

void pig::setName(char *name) {
    pig::name = name;
}

pig::pig(const pig &pig) {
    cout << "拷贝构造函数" << endl;
}
void pig::showpigInfo() const {

}
void pig::changTag(int age) {

}
//有元函数特殊：不需要关键字，也不需要对象：： 。只需要保证函数名  参数
void changeAge(pig *pig, int age){

}

int pig::id = 12;
