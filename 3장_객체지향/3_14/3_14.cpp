#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand((unsigned int)time(NULL)); // ���� �ð����� �õ尪 ����
	for (int i = 0; i < 5; i++) {
		cout << (rand() % 100) + 1 << '\n'; // 1 ~ 100 ������ ���� ���� ���
		cout << (rand() % 96) + 5 << '\n'; // 5 ~ 100 ���� ���� ����
		// (rand() % n) + m => (0 ~ n-1) + m => m ~ (m + n -1) �� �ǹ��Ѵ�.
	}
}