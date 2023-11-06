// A basic calculator program that allows the user to perform addition, subtraction, multiplication, and division.

#include <iostream>

int main() {
    double num1, num2;
    char operation;
    
    std::cout << "Enter two numbers: \n";
    std::cin >> num1 >> num2;
    
    std::cout << "\nEnter an operation (+, -, *, /): ";
    std::cin >> operation;
    
    double result;
    
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                std::cout << "Division by zero is not allowed." << std::endl;
                return 1;
            }
            result = num1 / num2;
            break;
        default:
            std::cout << "Invalid operation." << std::endl;
            return 1;
    }
    
    std::cout << "\nResult : " << result << std::endl;
    
    return 0;
}
