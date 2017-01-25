#include <iostream>
using namespace std;
int main() {
	int aScore = 0;
	int bScore = 0;
	int triplet[2][3];
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> triplet[i][j];
 		}
	}
	for (int i = 0; i < 3; i++) {
		if (triplet[0][i] > triplet[1][i]) {
			aScore += 1;
		} else if (triplet[0][i] < triplet[1][i]) {
			bScore += 1;
		}
	} 
	cout << aScore << " " << bScore;
	return 0;
}