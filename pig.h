//
// Created by 杨敬华 on 2022/11/1.
//

//#ifndef PIG_H //有没有宏
//#define PIG_H // 定义宏
//#endif
#include "iostream"
using namespace std;
class pig {
private:
    int age;
    char *name;
public:
    static int id;

    pig();

    pig(int age);

    pig(int age, char *name);

    pig(char *name);

    ~pig();

    pig(const pig &pig);

    int getAge() const;

    void setAge(int age);

    char *getName() const;

    void setName(char *name);

    void showpigInfo() const;

//    静态函数
    static void changTag(int age);

//有元函数声明
    friend void changeAge(pig *pig, int age);
};


//#endif //UNTITLED2_PIG_H
