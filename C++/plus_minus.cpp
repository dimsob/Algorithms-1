#include <iostream>
using namespace std;
int main() {
	int size;
	cin >> size;
	int positive = 0;
	int negative = 0;
	int zero = 0;
	for (int i = 0; i < size; i++) {
		int number;
		cin >> number;
		if (number > 0) {
			positive += 1;
		} else if (number == 0) {
			zero += 1;
		} else {
			negative += 1;
		}
	}
	double positivePercentage = (double) positive/(double) size;
	double negativePercentage = (double) negative/(double) size;
	double zeroPercentage = (double) zero/(double) size;
	cout << positivePercentage << endl;
	cout << negativePercentage << endl;
	cout << zeroPercentage << endl;
	return 0;
}