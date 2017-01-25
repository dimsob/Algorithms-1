#include <iostream>
using namespace std;
int main() {
	int arraySize;
	cin >> arraySize;
	int numbers[arraySize];
	long long int total = 0;
	for (int i = 0; i < arraySize; i++) {
		cin >> numbers[i];
		total += numbers[i];
	}
	cout << total << endl;
	return 0;
}