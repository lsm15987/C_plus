#include <iostream>
#include <string>
using namespace std;

template <class T>
class MyStack {
	int tos;
	T data[100];
public:
	MyStack();
	void push(T element);
	T pop();
};

template <class T>
MyStack<T>::MyStack() {
	tos = -1;
}

template <class T>
void MyStack<T>::push(T element) {
	if (tos == 99) {
		cout << "stack full";
		return;
	}
	tos++;
	data[tos] = element;
}

template <class T>
T MyStack<T>::pop() {
	if (tos == -1) {
		cout << "stack empty";
		return 0;
	}
	T redata = data[tos--];
	return redata;
}


class Point {
	int x, y;
public:
	Point(int x = 0, int y = 0) {
		this->x = x; this->y = y;
	}
	void show() { cout << '(' << x << ',' << y << ')' << endl; }
};

int main()
{
	// 클래스로 구체화하여 사용하기
	MyStack<Point> pointStack;
	Point a(2, 3), b;
	pointStack.push(a);
	b = pointStack.pop();
	b.show();

	// 클래스 포인터로 구체화하여 사용하기
	MyStack<Point*> pStack;
	pStack.push(new Point(10, 20));
	Point* pPoint = pStack.pop();
	pPoint->show();

	// string 으로 구체화하여 사용하기
	MyStack<string> strStack;
	string s = "c++";
	strStack.push(s);
	strStack.push("java");
	cout << strStack.pop() << endl;
	cout << strStack.pop() << endl;

}