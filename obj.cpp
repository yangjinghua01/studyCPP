//
// Created by 杨敬华 on 2022/10/29.
//
#include "Student.h"

int mainppp() {
//    规范写法：要有头文件，.h,.hpp -- 实现文件 .c .cpp
    Student student1; ///栈空间开辟
    student1.setName("yjh");
    student1.setAge(23);
    cout << "name:" << student1.getName() << "\nage:" << student1.getAge() << endl;
//    ========== 下面是堆空间
    Student *student2 = new Student(); // 有new 就要有 delete
    student2->setAge(1);
    student2->setName("student2");
    cout << "student2:\n" << "name:" << student2->getName() << "\nage:" << student2->getAge() << endl;
    if (student2) {
        delete student2; // 必须手动释放堆空间的student2
        student2 = NULL;
    }
    return 0;
}