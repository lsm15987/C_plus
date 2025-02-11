#include <iostream>
#include <string>
using namespace std;

// TV 클래스 선언
class TV {
	int size;
public:
	TV() { size = 20; }
	TV(int size) { this->size = size; }
	int getSize() { return size; }
};
// WideTV 클래스 선언
class WideTV :public TV {
	bool videoln;
public:
	WideTV(int size, bool videoln) :TV(size) {
		this->videoln = videoln;
	}
	bool getVideoIn() { return videoln; }
};
// SmartTV 클래스 선언
class SmartTV :public WideTV {
	string ipAddr;
public:
	SmartTV(string ipAddr, int size) :WideTV(size, true) {
		this->ipAddr = ipAddr;
	}
	string getIpAddr() { return ipAddr; }
};

int main()
{
	SmartTV htv("192.0.0.1", 32);
	cout << "size = " << htv.getSize() << endl;
	cout << "videoIn=" << boolalpha<< htv.getVideoIn() << endl;
	cout << "IP=" <<htv.getIpAddr() << endl;
}