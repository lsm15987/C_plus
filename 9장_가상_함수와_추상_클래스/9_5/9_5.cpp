#include <iostream>
using namespace std;

class Shape {
public:
	virtual void draw() {
		cout << "---Shape---" << endl;
	}
};
class Circle :public Shape {
public:
	void draw() {
		Shape::draw();
		cout << "---Circle---" << endl;
	}
};

int main()
{
	Shape *s = new Circle();
	s->draw();
	s->Shape::draw();
}