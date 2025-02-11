#include <iostream>
using namespace std;

// 전방 선언(Forward Decalaration)
// 실제로 식별자를 정의하기 전 식별자의
// 존재를 컴파일러에 미리 알리는 것
class Rect;
bool equals(Rect r, Rect s);

class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend bool equals(Rect r, Rect s); // 프렌드 함수 선언
};

// 프렌드 함수 정의
bool equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == s.height)return true;
	else return false;
}

int main()
{
	Rect a(3, 4), b(4, 5);
	if (equals(a, b))cout << "equal" << endl;
	else cout << "not equal" << endl;
}