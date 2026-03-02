
#include <iostream>

int main() {
    int firstNumber, secondNumber, sum;
    
    std::cout << "Enter two integers: ";
    std::cin >> firstNumber >> secondNumber;

    // Sum of two numbers in stored in variable sum
    sum = firstNumber + secondNumber;

    // Prints sum 
    std::cout << firstNumber << " + " << secondNumber << " = " << sum << std::endl;

    return 0;
}