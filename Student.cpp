//
// Created by 杨敬华 on 2022/10/29.
// Student实现文件
#include "Student.h"

//根据头文件只写实现
void Student::setAge(int age) {
    this->age = age;
}

void Student::setName(char *name) {
    this->name = name;
}

int Student::getAge() {
    return this->age;
}

char *Student::getName() {
    return this->name;
}

