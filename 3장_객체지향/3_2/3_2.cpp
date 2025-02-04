#include <iostream>
using namespace std;

class Rectangle {
public:
    int width, height;
    int getArea();
};

class Triangle {
public:
    int width, height;
    double getArea();
};

int Rectangle::getArea() {
    return width * height;
}

double Triangle::getArea() {
    return width * height / 2.0; // double로 반환하기 위해 2.0
}

int main()
{
    Rectangle rect;
    rect.width = 3;
    rect.height = 5;
    cout << "사각형의 면적은 " << rect.getArea() << '\n';

    Triangle tri;
    tri.width = 5; // 멤버 변수의 이름은 같으나 객체가 다르기에 접근하는 대상이 다름
    tri.height = 3;
    cout << "삼각형의 면적은 " << tri.getArea();

}