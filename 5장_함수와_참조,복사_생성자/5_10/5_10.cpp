#include <iostream>
using namespace std;

char& find(char s[], int index) {
	return s[index];
}

int main()
{
	char name[] = "Mike";
	cout << name << endl;

	find(name, 0) = 'S'; // name[0] 을 'S' 로 변경
	cout << name << endl;

	char& ref = find(name, 2); // ref는 name[2]를 가리킨다.
	ref = 't';
	cout << name << endl;
}