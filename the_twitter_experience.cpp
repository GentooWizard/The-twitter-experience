#include <string>
#include <iostream>
using namespace std;
int main() {
	char input;
	cout << "A twitter user is aproching you / Do you talk to him (Y/N): ";
	cin >> input;
	if (input == 'N' || input == 'n') {
		return 0;
	}
	if (input == 'Y' || input == 'y') {
		cout << "The twitter user asks you if you support the LGBTQIA+ community / Do you? (Y/N): ";
		cin >> input;
		if (input == 'N' || input == 'n') {
			cout << "You got cancelled lol";
			return 0;
		}
		if (input == 'Y' || input == 'y') {
			cout << "YOU WON TWITTER YAY" << endl;
		}
	}
	return 0;
}
