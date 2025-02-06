#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
using namespace std;

int main()
{
	Circle circleArray[3] = { Circle(),Circle(10),Circle(20) };
	for (int i = 0; i < 3; i++) {
		cout << "Circle의 면적은 " << circleArray[i].getArea() << '\n';
	}
	Rectangle rectangleArray[3] = { Rectangle(5,10),Rectangle(5),Rectangle() };
	Rectangle* p;
	p = rectangleArray;
	for (int i = 0; i < 3; i++) {
		(p + i)->getArea();
	}
}