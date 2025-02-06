#include <iostream>
#include "Circle.h"
using namespace std;

int main()
{
	Circle circleArray[3];

	circleArray[0].setRadius(10); 
	circleArray[1].setRadius(20);
	circleArray[2].setRadius(30);

	Circle* p;
	p = circleArray;
	for (int i = 0; i < 3; i++) {
		cout << "Circle의 면적은 " << (p+i)->getArea() << endl;
		// cout << "Circle의 면적은 " << p[i].getArea() << endl;
	}
}