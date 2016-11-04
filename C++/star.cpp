#include <iostream>
using namespace std;

int main() {
	int size = 0;
	cout << "Enter the size" << endl;
	cin >> size;

	if (size == 0) {
		cout << "Invalid size" << endl;
		return 0;
	} else {

		for (int i = 1; i <= size; i++) {
			for (int j = 1; j <= size - i; j++) {
				cout << " ";
			}
			for (int j = 1; j <= i; j++) {
				cout << "* ";
			}
			cout << endl;
		}

		for (int i = size - 1; i >= 0; i--) {
			for (int j = 1; j <= size - i; j++) {
				cout << " ";
			}
			for (int j = 1; j <= i; j++) {
				cout << "* ";
			}
			cout << endl;
		}
	}

	return 0;
}