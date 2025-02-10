#include<iostream>
using namespace std;

// 매개 변수를 통해 평균을 리턴하고,
// 리턴문을 통해 함수의 성공여부를 리턴
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
	if (average(x, 6, avg, sum))cout << "평균은 " << avg << " 합은 " << sum << " 이다." << endl;
	else cout << "평균을 구할 수 없다." << endl;

	if (average(x, -1, avg, sum))cout << "평균은 " << avg << "이다." << endl;
	else cout << "평균을 구할 수 없다." << endl;
}