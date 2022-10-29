// Student 对象头文件
#include "iostream"

using namespace std;

//student 只写声明不写函数
class Student {
private://下面的代码（成员和函数）都是私有
    char *name;
    int age;
public://下面的代码（成员和函数）都是私有
    void setAge(int age);  //声明函数
    void setName(char *name);  //声明函数
    int getAge();  //声明函数
    char * getName();  //声明函数

};
