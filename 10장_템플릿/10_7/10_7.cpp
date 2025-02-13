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
	ipStack.push(p); // new int[3] 이라는 배열을 올린 것. 3개의 값을 각각 올린게 아님!!
	
	int* q = ipStack.pop(); // new int[3] 이라는 배열을 받은거임
	for (int i = 0; i < 3; i++) {
		cout << q[i] << ' ';
	}
	cout << endl;
	delete[] p;
}