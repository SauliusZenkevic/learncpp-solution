/*
Q: Ask the user to enter three values. The program should then print these values. Add an appropriate comment above function main().
The program should match the following output (when run with input values 4, 5, and 6):

Enter three numbers: 4 5 6
You entered 4, 5, and 6.
*/

#include <iostream>

int main() {
	int a = 0, b = 0, c = 0;
	std::cout << "Enter 3 numbers: ";
	std::cin >> a >> b >> c;
	std::cout << "You entered " << a << ", " << b << " and " << c << std::endl; 
}
