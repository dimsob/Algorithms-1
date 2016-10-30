#include <iostream>
using namespace std;

class List {
public:
	int numbers[10];
	unsigned int end = -1;

public:
	void insert(int number) {
		if (end == -1) {
			numbers[0] = number;
			end = 0;
		} else {
			end += 1;
			numbers[end] = number;
		}
	}

	void insert(int position, int number) {
		if (end == -1) {
			numbers[0] = number;
			end++;
		} else {
			if (position < 0 || position > end) {
				cout << "Overflow" << endl;
			} else {
				if (end == sizeof(numbers)) {
					cout << "List size is full" << endl;
				} else {
					for (int i = end; i >= position; i--) {
						numbers[i + 1] = numbers[i];
					}
					numbers[position] = number;
					end++;
				}
			}
		}
	}

	int size() {
		if (end == -1) {
			return 0;
		} else {
			return end + 1;
		}	
	}

	int get(int position) {
		if (position < 0 || position > 9) {
			cout << "Index out of bound" << endl;
			return end;
		} else {
			return numbers[position];
		}
	}
};

int main() {
	List list;
	cout << "Size of list is " << list.size() << endl;
	list.insert(10);
	list.insert(11);
	list.insert(12);
	list.insert(2, 10);
	cout << "Size of list is " << list.size() << endl;
	cout << "Number at 2nd position is " << list.get(3) << endl;

	return 0;
}