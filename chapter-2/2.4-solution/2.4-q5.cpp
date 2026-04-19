/*
Q: Write a complete program that reads an integer from the user, doubles it using the doubleNumber() function you wrote in the previous quiz question, and then prints the doubled value out to the console.
*/
#include <iostream>

int doubleNumber(int a) {
	return 2 * a;
}

int main() {
	int b;
	std::cin >> b;
	std::cout << doubleNumber(b);
}
