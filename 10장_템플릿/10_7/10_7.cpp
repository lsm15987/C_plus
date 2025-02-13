#include <iostream>
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

int main()
{
	MyStack<int*> ipStack;
	int* p = new int[3];
	for (int i = 0; i < 3; i++) {
		p[i] = i * 10;
	}
	ipStack.push(p); // new int[3] �̶�� �迭�� �ø� ��. 3���� ���� ���� �ø��� �ƴ�!!
	
	int* q = ipStack.pop(); // new int[3] �̶�� �迭�� ��������
	for (int i = 0; i < 3; i++) {
		cout << q[i] << ' ';
	}
	cout << endl;
	delete[] p;
}