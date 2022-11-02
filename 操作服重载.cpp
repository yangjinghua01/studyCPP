//
// Created by 杨敬华 on 2022/11/2.
//

#include "iostream"
using namespace std;
class Derry{
private:
    int x,y;
public:
    Derry(int x, int y) : x(x), y(y) {}

    int getX() const {
        return x;
    }

    void setX(int x) {
        Derry::x = x;
    }

    int getY() const {
        return y;
    }

    void setY(int y) {
        Derry::y = y;
    }
};
//在真是开发过程中，基本上都是写在类的里面的
//把+重载运算符重载
Derry operator + (Derry derry1,Derry derry2){ //operator 代表重载
    int x =derry1.getX()+derry2.getX();
    int y = derry1.getY()+derry2.getY();
    Derry res(x,y);
    return  res;
}
int mainchongzai(){
    cout<<"操作服重载"<<endl;
    Derry derry1 = Derry(1000,20000);
    Derry derry2 = Derry(1000,20000);
    Derry derry = derry1+derry2; // 把加号重载掉
    cout <<derry.getX()<<","<<derry.getY()<<endl;
    return 0;
}