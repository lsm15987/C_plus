#ifndef CIRCLE
#define CIRCLE
class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	void setRadius(int r) { radius = r; }
	double getArea() { return 3.14 * radius * radius; }
};
#endif