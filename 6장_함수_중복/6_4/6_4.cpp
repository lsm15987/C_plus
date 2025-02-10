#include <iostream>
#include <string>
using namespace std;

void star(int a);
void msg(int id, string text);

void star(int a = 5) {
	for (int i = 0; i < a; i++) {
		cout << '*';
	}
	cout << '\n';
}
void msg(int id, string text = "") {
	cout << id << ' ' << text << endl;
}

int main()
{
	star();
	star(10);

	msg(10);
	msg(10, "Hello");
}