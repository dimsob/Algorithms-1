#include <iostream>
using namespace std;
int main() {
	int stair;
	cin >> stair;
	for (int i = 0; i < stair; i++) {
		for (int j = 0; j < stair - (i + 1); j++) {
			cout << " ";
		}

		for (int k = 0; k < i + 1; k++) {
			cout << "#";
		}

		cout << endl;
	}
	return 0;
}