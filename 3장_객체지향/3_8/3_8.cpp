#include <iostream>
using namespace std;

class Circle {
public:
    int radius;
    Circle();
    Circle(int r);
    ~Circle();
    double getArea();
};

Circle::Circle() :Circle(1) {}
Circle::Circle(int r) {
    radius = r;
    cout << "������ " << radius << "�� ����" << '\n';
}
Circle::~Circle() {
    cout << "������ " << radius << "�� �Ҹ�" << '\n';
}
double Circle::getArea() {
    return radius * radius * 3.14;
}

Circle globalDonut(1000);
Circle globalPizza(2000);

void f() {
    Circle fDonut(100);
    Circle fPizza(200);
}

int main()
{
    Circle mainDonut(10);
    Circle mainPizza(20);
}