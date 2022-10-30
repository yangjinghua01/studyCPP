//
// Created by 杨敬华 on 2022/10/30.
//
#include "iostream"

using namespace std;

class Student {
private:
    char *name;
    int age;
public:
    Student() {}

    Student(char *name, int age) : name(name), age(age) {}

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

    ~Student() {

    }
};
struct Persion{
    int age;
    char * name;
};

int main() {
    Persion p1 ={100,"23"};
//    = 你看起来没有什么特殊，c/C++编译器 会把p1 的值给 persion2
    Persion persion2 = p1;
    cout<<persion2.name<<","<<persion2.age<<endl;
    return 0;
}

