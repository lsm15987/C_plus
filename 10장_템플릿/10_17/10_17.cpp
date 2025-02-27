#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print(int n) {
	cout << n << " " << endl;
}
// STL for_each() 함수를 이용하여 벡터의 모든 원소 출력
int main()
{
	// print함수를 만들어 출력
	vector<int> v = { 1,2,3,4,5 };
	for_each(v.begin(), v.end(), print);
	// 람다 함수를 만들어 출력
	for_each(v.begin(), v.end(), [](int n) {cout << n << " "; });
}