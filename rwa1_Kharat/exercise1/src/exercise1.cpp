#include <iostream>

int main() {

    //here we initialize trhe variables
    int int_var = 250;
    float float_var = 987.654;
    double double_var = 543.210987;

    //now print these values below
    std::cout << "initial values: \n";
    std::cout << "int_var: " << int_var << "\n";
    std::cout << "float_var: " << float_var << "\n";
    std::cout << "double_var: " << double_var << "\n";


    //now mpdify the values
    int_var -=20;
    float_var *= 1.5;
    double_var /= 3;

    //printing the modified values below
    std::cout << "modified values: " << "\n";
    std::cout << "int_var: " << int_var << "\n";
    std::cout << "float_var: " << float_var << "\n";
    std::cout << "double_var: " << double_var << "\n";

    return 0;

}