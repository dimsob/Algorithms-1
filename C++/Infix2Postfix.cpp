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
	
	char expression[10];

 	cout << "Enter an expression" << endl;
 	cin >> expression;

 	Stack stack;

 	for (int i = 0; i < sizeof(expression); i++) {
 		char token = expression[i];
 		if (token == '+' || token == '-'){
			cout << "Low precedence operator" << endl;
 		} else if (token == '/' || token == '*') {
			cout << "High precedence operator" << endl;
 		} else {
 			cout << "Operand" << endl;
 		}
 	}

 	return 0;
 }
