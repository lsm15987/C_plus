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
	cout << "거울아 거울아 누가 제일이냐 >> ";
	return ins;
}
int main() {
	cout << "벨이 울립니다" << beep << endl;
	cout << "C" << rightarrow << "C++" << rightarrow << "Java" << endl;
	cout << "Visual" << fivestar << "C++" << endl;
	
	string answer;
	cin >> question >> answer;
	cout << "제일은 " << answer << "입니다." << endl;
}