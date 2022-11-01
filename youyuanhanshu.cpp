//
// Created by 杨敬华 on 2022/11/1.
//
#include "iostream"

using namespace std;

class Person {
private:
    int age = 0;
public:
    Person(int age) : age(age) {}

    int getAge() const {
        return age;
    }

    void setAge(int age);

//    定义有元函数
    friend void updateAge(Person *p, int age);

    friend void showAge(Person &p, int age);
};

void showAge(Person &p, int age) {
    p.age = age;
}

//有元的实现
void updateAge(Person *p, int age) {
//    默认情况下不可以修改
//    有元可以实现
    p->age = age;
}

void Person::setAge(int age) {
    Person::age = age;
}

int main() {
    Person person = Person(9);
    showAge(person, 22);
    cout << person.getAge() << endl;
    updateAge(&person, 88);
    cout << person.getAge() << endl;
    person.setAge(0);
    cout<<person.getAge()<<endl;
    return 0;
}
