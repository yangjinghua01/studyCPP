//
// Created by 杨敬华 on 2022/10/30.
//
#include "iostream"

using namespace std;

class Student {
public:
    Student() {
        cout << "空参构造 " << endl;
    }

    Student(char *name) : Student(name, 11) {
        this->name = name;
        cout << "有参构造 " << endl;
    }

    Student(char *name, int age) : name(name), age(age) {
        cout << "2参构造 " << endl;
    }

//    析构函数 Student 对象，临终遗言，Student 对象被回收了，你做一些释放工作
    ~Student() {
        cout<<"析构函数"<<endl;

    }

    char *getName() const {
        return name;
    }

    void setName(char *name) {
        Student::name = name;
    }

    int getAge() const {
        return age;
    }

    void setAge(int age) {
        Student::age = age;
    }

private:
    char *name;
    int age;
};

int main1dd() {
//    TODO ======栈区
//    Student student;
//    student.setAge(1);
//    student.setName("xxgc");
//    cout <<"name:"<<student.getName()<<"age:"<<student.getAge()<<endl;
//    Student student1("java",2);
//    cout <<"name:"<<student1.getName()<<"age:"<<student1.getAge()<<endl;
    Student student2("tjhslk");
    cout << "name:" << student2.getName() << "age:" << student2.getAge() << endl;
    Student *student = new Student("肚子饿", 2);
    cout << "name:" << student->getName() << "age:" << student->getAge() << endl;
    if (student) {
        delete student;
        student = NULL;
    }
    return 0;
}
