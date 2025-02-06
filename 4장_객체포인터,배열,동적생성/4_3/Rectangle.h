#include <iostream>
#ifndef RECTANGLE
#define RECTANGLE
using namespace std;

class Rectangle {
	int width, height;
public:
	Rectangle() { width = 1; height = 1; }
	Rectangle(int r) { width = r; height = r; }
	Rectangle(int w, int h) { width = w, height = h; }
	void getArea() { cout << "Rectangle의 면적은 " << width * height << endl; }
};
#endif