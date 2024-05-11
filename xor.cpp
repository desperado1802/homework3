#include <iostream>

int main(){

    int num1, num2;

    std::cout << "Enter two numbers 0 or 1: ";
    std::cin >> num1 >> num2;

    if ((num1 != 0 && num1 != 1) || (num2 != 0 && num2 != 1)) {
        std::cerr << "Error: Both numbers must be either 0 or 1." << std::endl;
        return 1;
    }

    int result = num1 ^ num2;
    std::cout << "Result of XOR operation: " << result << std::endl;

    return 0;
}