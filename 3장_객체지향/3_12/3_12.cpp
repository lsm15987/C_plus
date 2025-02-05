#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
	Circle donut;
	double area = donut.getArea();
	cout << " donut 면적은 ";
	cout << area << '\n';

	Circle pizza(30);
	area = pizza.getArea();
	cout << " pizza 면적은 ";
	cout << area << '\n';
}