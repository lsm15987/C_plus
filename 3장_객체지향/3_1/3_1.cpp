#include <iostream>

using namespace std;

class Circle {
public:
    int radius;
    double getArea();
};

double Circle::getArea() {
    return 3.14 * radius * radius;
}

int main()
{
    Circle donut; // 객체 생성
    donut.radius = 1; // donut 객체 멤버 변수 접근
    double area = donut.getArea(); // donut 객체 멤버 함수 접근
    cout << "donut의 면적은 " << area << '\n';

    Circle pizza;
    pizza.radius = 30;
    area = pizza.getArea();
    cout << "pizza의 면적은 " << area;
}