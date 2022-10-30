//
// Created by 杨敬华 on 2022/10/30.
//
#include "iostream"

using namespace std;
//自定义命名空间
namespace yjh {
    int age = 33;
    char *name = "yjh";

    void show() {
        cout << "name是:" << name << ",age是：" << age << endl;
    }

    void action() {
        cout << "action1" << endl;
    }
}
namespace yjh1 {
    void action() {
        cout << "action2" << endl;
    }
}
//小概率事件命名空间嵌套
namespace yjh3 {
    namespace yjhin1 {
        namespace yjhin2 {
            namespace yjhin3 {
                void out() {
                    cout << "爱恨情仇" << endl;
                }
            }
        }
    }
}

//声明自己写的命名空间
//using  namespace  yjh;
int main11() {
// 使用自定义命名空间1
    using namespace yjh;
    int ageValue1 = age;
    cout << "\nageValue1:" << ageValue1 << endl;
//使用自定义命名空间2
    int ageValue2 = yjh::age;
    cout << "\nageValue2:" << ageValue2 << endl;
    show();
//    当两个命名空间有重复的函数时
    yjh::action();
    yjh1::action();
//    嵌套使用
//第一种方式
    using namespace yjh3::yjhin1::yjhin2::yjhin3;
    out();
//第二种方式
    yjh3::yjhin1::yjhin2::yjhin3::out();
    return 0;
}
