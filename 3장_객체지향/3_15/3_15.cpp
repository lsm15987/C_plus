#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num1, num2;
	int arr[7][7] = { 0 };
	int sum[7] = { 0 };
	cin >> num1 >> num2;
	srand((unsigned int)time(NULL));
	for (int i = 0, sum = 0; i < num1; i++) {
		for (int j = 0; j < num2; j++) {
			arr[i][j] = (rand() % 5) + 1;
			sum += arr[i][j];
			cout << arr[i][j] << ' ';
		}
		cout << sum << ' ' << sum / (double)num1 << '\n';
		sum = 0;
	}
	for (int i = 0; i < num2; i++) {
		for (int j = 0; j < num1; j++) {
			sum[i] += arr[j][i];
		}
		cout << sum[i] << ' ';
	}
	cout << '\n';
	for (int i = 0; i < num2; i++) {
		cout << sum[i] / (double)num2 << ' ';
	}
}