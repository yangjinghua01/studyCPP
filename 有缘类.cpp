//
// Created by 杨敬华 on 2022/11/2.
//友元类
#include "iostream"

using namespace std;

class ImageView {
private:
    int viewSize;

    friend class Class;

public:
};

//在java中每个类读会有一个Class 此Class 可以操作ImageViw私有成员
class Class {
public:
    ImageView imageView;

    void changeViewSize(int size) {
        imageView.viewSize = size;
    }

    int getImageViewSize() {
        return imageView.viewSize;
    }
};

int main() {
    Class mImageViewClass;
    mImageViewClass.changeViewSize(999);
    int size = mImageViewClass.getImageViewSize();
    cout << size << endl;
    return 0;
}
