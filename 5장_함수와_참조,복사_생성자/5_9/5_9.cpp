#include <iostream>
using namespace std;

// Reactangle Ŭ������ �����ϰ�, box ��ü�� �����ϰ�, 
// getRectangle() �Լ� ȣ���� ���� ����, ������ ���� �Է� �޾�
// box�� ������ ����ϴ� ���α׷� �ۼ�

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
	cout << "���� = " << rect.getArea() << endl;
}