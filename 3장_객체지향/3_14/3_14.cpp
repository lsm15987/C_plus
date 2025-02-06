#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand((unsigned int)time(NULL)); // 현재 시간으로 시드값 설정
	for (int i = 0; i < 5; i++) {
		cout << (rand() % 100) + 1 << '\n'; // 1 ~ 100 까지의 랜덤 숫자 출력
		cout << (rand() % 96) + 5 << '\n'; // 5 ~ 100 까지 랜덤 숫자
		// (rand() % n) + m => (0 ~ n-1) + m => m ~ (m + n -1) 을 의미한다.
	}
}