#include <iostream>
using namespace std;
/**
 * Below is the program to convert the infix expresion 
 * into postfix expression
 */

 class Stack {
 public:
 	char stack[10];
 	int end = 0;

 public:
 	void push(char operand) {
 		if (end == sizeof(stack) - 1){
 			stack[end] = operand;
 			end++;
 		} else {
 			cout << "Stack full" << endl;
 		}
 	}

 	void pop() {
 		if (end != 0) {
 			end--;
 		} else {
 			cout << "Empty stack" << endl;
 		}
 	}

 	char top() {
 		if (end != 0) {
 			return stack[end - 1];
 		} else {
 			cout << "Empty stack" << endl;
 		}
 	}
 };

 int main() {

 	//Expression that is to be evaluated
 	string expression;

 	cout << "Enter an expression" << endl;
 	cin >> expression;

 	//Stack to store operator
 	Stack stack;

 	for (char token : expression) {
	 	if (token == '+' || token == '-'){

 		} else if (token == '/' || token == '*') {

 		} else {
 			cout << "Operand" << endl;
 		}
 	}

 	return 0;
 }
