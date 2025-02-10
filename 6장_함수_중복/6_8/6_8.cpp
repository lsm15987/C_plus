#include <iostream>
using namespace std;

class Vector {
	int* p;
	int size;
public:
	Vector(int n = 100) { 
		p = new int[n];
		size = n;
	}
	~Vector() {
		delete[] p;
	}
};

int main()
{
	Vector* v1, * v2;
	v1 = new Vector();
	v2 = new Vector(1024);

	delete v1;
	delete v2;
}