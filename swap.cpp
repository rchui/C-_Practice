#include <iostream>

int main() {
	int input1, input2;
	std::cout << "Enter an integer: ";
	std::cin >> input1;
	std::cout << "Enter a larger integer: ";
	std::cin >> input2;
	if (input1 > input2) {
		std::cout << "Swapping the values" << std::endl;
		int temp = input1;
		input1 = input2;
		input2 = temp;
		std::cout << "The smaller value is " << input1 << std::endl;
		std::cout << "The larger value is " << input2 << std::endl;
	} else {
		std::cout << "The smaller value is " << input1 << std::endl;
		std::cout << "The larger value is " << input2 << std::endl;
	}
}
