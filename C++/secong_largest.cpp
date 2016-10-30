/**
 * This is a simple program to evaluate the second largest
 * number out of three.
 */
#include <iostream>
using namespace std;

int main() {

	int first = 0, second = 0, third = 0;
	
	cout << "Enter 3 numbers" << endl;
	
	cin >> first;
	cin >> second;
	cin >> third;

	if (first > second) {
		if (first > third) {
			if (second > third) {
				cout << "Second largest is " << second << endl;
			} else {
				cout << "Second largest is " << third << endl;
			}
		} else {
			cout << "Second largest is " << first << endl;
		}
	} else {
		if (second > third) {
			if (first > third) {
				cout << "Second largest is " << first << endl;
			} else {
				cout << "Second largest is " << third << endl;
			}
		} else {
			cout << "Second largest is " << second << endl;
		}
	}
	return 0;
}