#include <cstddef>
#include <iostream>
using namespace std;
class Shape {
	Shape* next;
protected:
	virtual void draw();
public:
	Shape() { next = NULL; }
	virtual ~Shape() {}
	void paint();
	Shape* add(Shape* p);
	Shape* getNext() { return next; }
};
class Circle : public Shape {
protected:
	virtual void draw();
};
class Line : public Shape {
protected:
	virtual void draw();
};
class Rect : public Shape {
protected:
	virtual void draw();
};
void Shape::paint() {
	draw();
}

void Shape::draw() {
	cout << "--Shape--" << endl;
}

Shape* Shape::add(Shape* p) {
	this->next = p;
	return p;
}
void Circle::draw() {
	cout << "Circle" << endl;
}
void Line::draw() {
	cout << "Line" << endl;
}
void Rect::draw() {
	cout << "Rectangle" << endl;
}

int main() {
	Shape* pStart = NULL;
	Shape* pLast;

	pStart = new Circle(); // ó���� �� ������ �����Ѵ�.
	pLast = pStart;

	pLast = pLast->add(new Rect()); // �簢�� ��ü ����
	pLast = pLast->add(new Circle()); // �� ��ü ����
	pLast = pLast->add(new Line()); // �� ��ü ����
	pLast = pLast->add(new Rect()); //�簢�� ��ü ����

	// ���� ����� ��� ������ ȭ�鿡 �׸���.
	Shape* p = pStart;
	while (p != NULL) {
		p->paint();
		p = p->getNext();
	}
	// ���� ����� ��� ������ �����Ѵ�.
	p = pStart;
	while (p != NULL) {
		Shape* q = p->getNext(); // ���� ���� �ּ� ���
		delete p; // �⺻ Ŭ������ ���� �Ҹ��� ȣ��
		p = q; // ���� ���� �ּҸ� p�� ����
	}
}


