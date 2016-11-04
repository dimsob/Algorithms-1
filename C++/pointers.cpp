#include <iostream>
using namespace std;

int main() {
	int var = 20;  //Variable storing integer value 20
	int *i;        //Pointer 

	i = &var;

	cout << "Value of variable is " << var << endl;
	cout << "Value of pointer is " << *i << endl;
	cout << "Value of address stored in pointer is " << i << endl;
}