//
// Created by 杨敬华 on 2022/10/29.
//常量引用
#include "iostream"
#include "string.h"

using namespace std;
//代码的统一性
typedef struct {
    char name[10];
    int age;
} Student;
void constinsertStudent( const Student &student) {
//    strcpy(student.name,"llll"); ------>常量无法修改报错。
    cout <<"constinsertStudent\n"<<"name:"<<student.name<<",age:"<<student.age<<endl;
}
void insertStudent( Student &student) {
    strcpy(student.name,"llll");
    cout <<"insertStudent\n"<<"name:"<<student.name<<",age:"<<student.age<<endl;

}


//插入数据库
int mainconst() {
    //    用户提交的student数据
    Student student = {"yjh", 1};
    constinsertStudent(student);
    insertStudent(student);
    return 0;
}



