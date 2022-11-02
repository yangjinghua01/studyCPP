//
// Created by 杨敬华 on 2022/11/2.
//
#include "iostream"

using namespace std;

class Derry {
private:
    int x, y;
public:
    Derry(int x, int y) : x(x), y(y) {}

    Derry() {}

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

    Derry operator+(Derry derry1) {
        int x = this->x + derry1.x;
        int y = this->y + derry1.y;
        return Derry(x, y);
    }

    friend void operator<<(ostream &_START, Derry derry1) {
        _START << "单个  开始输出 " << derry1.x << "!" << derry1.y << "单个  结束" << endl;
    }

//    friend ostream &operator>>(ostream &start, Derry & derry1) {
//        start << "多个  开始输出 " << derry1.x << "!" << derry1.y << "多个  结束" << endl;
//        return start;
//    }
    friend istream &operator>>(istream &start, Derry derry) {
//        接受系统的输入
        start >> derry.x;
        start >> derry.y;
        return start;
    }

};

int main1kdkkkdkkdkdkdkkdkd() {
    cout << "操作服重载" << endl;
    Derry derry1 = Derry(10, 20000);
    Derry derry2 = Derry(1000, 20000);
    Derry derry = derry1 + derry2; // 把加号重载掉
    cout << derry.getX() << "," << derry.getY() << endl;
    cout << derry2;
    cout << derry1;
//    cout >> derry1 >> derry1 >> derry1;
    Derry derry3;
    cin >> derry3;
    cout<<derry3.getY()<<derry3.getX()<<endl;
    return 0;
}
