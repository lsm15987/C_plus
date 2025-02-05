#include <iostream>
using namespace std;

struct StructSquare {
private:
	int width, height;
public:
	StructSquare(int w, int h) { width = w, height = h; }
	StructSquare(int l);
	double getArea();
};
StructSquare::StructSquare(int l) :StructSquare(l, l) {}
double StructSquare::getArea() {
	return width * height;
}

int main()
{
	StructSquare waffle(3);
	cout << "¸éÀûÀº " << waffle.getArea();
}