#include <iostream>
using namespace std;

ostream& fivestar(ostream& outs) {
	return outs << "*****";
}
ostream& rightarrow(ostream& outs) {
	return outs << "---->";
}
ostream& beep(ostream& outs) {
	return outs << '\a';
}
istream& question(istream& ins) {
	cout << "�ſ�� �ſ�� ���� �����̳� >> ";
	return ins;
}
int main() {
	cout << "���� �︳�ϴ�" << beep << endl;
	cout << "C" << rightarrow << "C++" << rightarrow << "Java" << endl;
	cout << "Visual" << fivestar << "C++" << endl;
	
	string answer;
	cin >> question >> answer;
	cout << "������ " << answer << "�Դϴ�." << endl;
}