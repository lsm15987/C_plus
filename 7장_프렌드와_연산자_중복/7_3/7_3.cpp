#include <iostream>
using namespace std;

// 클래스 전체를 프렌드 함수로
class Rect;
class RectManager {
public:
	bool equals(Rect r, Rect s);
	void copy(Rect& r, Rect& s);
};
class Rect {
	int width, height;
public:
	Rect(int width, int height) { this->width = width; this->height = height; }
	friend RectManager;
};

bool RectManager::equals(Rect r, Rect s) { 
	if (r.width == s.width && r.height == s.height)return true;
	else return false;
}
void RectManager::copy(Rect& r, Rect& s) {
	r.width = s.width;
	r.height = s.height;
}

int main()
{
	Rect a(3, 4), b(4, 5);
	RectManager rm;
	if (rm.equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;

	rm.copy(a, b);
	if (rm.equals(a, b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}