#include<iostream>
using namespace std;

// �Ű� ������ ���� ����� �����ϰ�,
// ���Ϲ��� ���� �Լ��� �������θ� ����
bool average(int x[], int size, int& avg,int &sum) {
	if (size <= 0)return 0;
	sum = 0;
	for (int i = 0; i < size; i++) sum += x[i];
	avg = sum / size;
	return true;
}
int main()
{
	int avg, sum;
	int x[] = { 0,1,2,3,4,5 };
	if (average(x, 6, avg, sum))cout << "����� " << avg << " ���� " << sum << " �̴�." << endl;
	else cout << "����� ���� �� ����." << endl;

	if (average(x, -1, avg, sum))cout << "����� " << avg << "�̴�." << endl;
	else cout << "����� ���� �� ����." << endl;
}