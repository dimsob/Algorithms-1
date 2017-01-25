#include <iostream>
using namespace std;
int main() {
	int matrixSize;
	cin >> matrixSize;
	int matrix[matrixSize][matrixSize];
	for (int i = 0; i < matrixSize; i++) {
		for (int j = 0; j < matrixSize; j++) {
			cin >> matrix[i][j];
		}
	}
	int diagonalA = 0;
	int diagonalB = 0;
	int i = 0;
	int j = 0;
	for (i = 0; i < matrixSize; i++) {
		for (int j = 0; j < matrixSize; j++){
			if (i == j) {
				diagonalA += matrix[i][j];
			}
		}
	}
	i = matrixSize;
	j = 0;
	while (i > 0 && j < matrixSize) {
		diagonalB += matrix[i - 1][j];
		i -= 1;
		j += 1;
	}
	int diff = diagonalA - diagonalB;
	if (diff < 0) {
		diff = diff * -1;
	}
	cout << diff << endl;
	return 0;
}