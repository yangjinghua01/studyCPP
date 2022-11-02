//
// Created by 杨敬华 on 2022/11/2.
//
#include "iostream"
using namespace std;
class Persio{
public:
    char * name;
    int age;
public:
    Persio(char *name, int age) : name(name), age(age) {}
    void print(){
        cout <<this->name<<""<<this->age<<endl;
    }
};
class Student : public Persio{
private:
    char * course;
public:
    Student(char *name, int age) : Persio(name, age) {
        cout<<"Student 构造函数"<<endl;
    }

    Student(char *name, int age, char *course) : Persio(name, age), course(course) {}

    void test(){
        cout<<name<<endl;
        print();
    }
};
int mainjicheng(){
    Student student = Student("name",1);
    student.name ="llll";
    return 0;
}
