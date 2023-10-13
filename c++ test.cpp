#include <string>
#include <iostream>
using namespace std;
int main() {
	char a;
	cout << "A twitter user is aproching you / Do you talk to him Y/N" << endl;
	cin >> a;
	if (a == 'N') {
		return 0;
	}
	if (a == 'Y') {
		char b;
		cout << "The twitter user asks you if you support the LGBTQIA+ community / Do you? Y/N" << endl;
		cin >> b;
		if (b == 'N') {
			cout << "You got cancelled lol";
			return 0;
		}
		if (b == 'Y') {
			cout << "YOU WON TWITTER YAY";
			return 0;
		}
	}
	return 0;
}