#include <iostream> // For input and output stream operations

int main() {
    int num1, num2;

    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    // Let the user enter the second integer
    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    // Performing the arithmetic operations
    int addition = num1 + num2;            
    int subtraction = num1 - num2;         
    int multiplication = num1 * num2;    

    // Division and modulus operations 
    double division = static_cast<double>(num1) / num2; 
    int modulus = num1 % num2;                        

    // Output the results of the operations
    std::cout << "Addition: " << addition << std::endl;
    std::cout << "Subtraction: " << subtraction << std::endl;
    std::cout << "Multiplication: " << multiplication << std::endl;

    // Print results for division and modulus
    std::cout << "Division: " << division << std::endl;
    std::cout << "Modulus: " << modulus << std::endl;

    return 0;
}