#include <iostream>
using namespace std;

// Reactangle 클래스를 생성하고, box 객체를 생성하고, 
// getRectangle() 함수 호출을 통해 가로, 세로의 값을 입력 받아
// box의 면적을 출력하는 프로그램 작성

class Rectangle {
	int width, height;
public:
	void set(int w, int h) { this->width = w; this->height = h; }
	int getArea() { return width * height; }
};
void getRectangle(Rectangle &rect) {
	int w, h;
	cin >> w >> h;
	rect.set(w, h);
}
int main()
{
	Rectangle rect;
	getRectangle(rect);
	cout << "면적 = " << rect.getArea() << endl;
}