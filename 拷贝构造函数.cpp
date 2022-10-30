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

//拷贝构造函数我们有但是看不到写了会覆盖他。
//覆盖拷贝构造函数  以前默认有一个拷贝构造函数 stu2 = stu1 默认赋值
    Student(const Student &student) { //常量引用只读
        cout << "拷贝构造函数" << endl;
        this->name = student.name;
        this->age = student.age + 1;
    }

    ~Student() {
        cout << "析构函数" << endl;
    }
};

struct Persion {
    int age;
    char *name;
};

// 等号的意义 隐式代码，引出拷贝构造函数。
//int main() {
//    Persion p1 ={100,"23"};
////    = 你看起来没有什么特殊，c/C++编译器 会把p1 的值给 persion2
//    Persion persion2 = p1;
//    cout<<persion2.name<<","<<persion2.age<<endl;
//    return 0;
//}
int mainggg() {
    Student stu("ligui", 1);
    cout << "stu:\nname:" << stu.getName() << ",age:" << stu.getAge() << endl;
//    Student student1; //这样不会调用自定义拷贝构造函数   会赋值但是不会调用拷贝构造函数。
//    student1 = stu;
    Student stu1 = stu;
    cout << "stu:\nname:" << stu1.getName() << ",age:" << stu1.getAge() << endl;
//    getchar();//程序停留。
    Student *student = new Student("test", 1);
    Student *student12 = student;
    return 0;
}
