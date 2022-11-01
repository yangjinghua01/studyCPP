//
// Created by 杨敬华 on 2022/11/1.
//
#include "iostream"

using namespace std;
/**
 * 静态总结：
 * 1。可以直接通过类名：：静态成员（字段/函数）
 * 2。静态的属性必须要初始化，然后在实现（规则）
 * 3。静态的函数只能取操作静态的属性和方法。
 */
class Dog {
public:
    char *info;
    int age;
//    先声明在实现
    static int id;

    Dog() {

    }
     void update() {
        id = 19;
    }
    static void update2() {
        id = 1239;
    }
};
// 在实现
int Dog::id =9;
int main() {
    Dog dog;
    cout<<Dog::id<<endl;
    dog.update2();
    cout<<Dog::id<<endl;
    dog.update();
    cout<<Dog::id<<endl;
    return 0;
}