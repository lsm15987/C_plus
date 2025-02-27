#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(int n) {
	cout << n << " " << endl;
}
// STL for_each() �Լ��� �̿��Ͽ� ������ ��� ���� ���
int main()
{
	// print�Լ��� ����� ���
	vector<int> v = { 1,2,3,4,5 };
	for_each(v.begin(), v.end(), print);
	// ���� �Լ��� ����� ���
	for_each(v.begin(), v.end(), [](int n) {cout << n << " "; });
}