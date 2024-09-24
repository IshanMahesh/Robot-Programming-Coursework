#include <iostream> 
#include <cctype>  

int main() {
    //ch here is used as a variable name
    char ch;

    std::cout << "Enter a single character: ";
    std::cin >> ch;

    // To check if the character is a uppercase and lowercase vowel
    bool isvowel = (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U');
    
    // To convert the character to uppercase if it's lowercase
    char uppercasechar = std::islower(ch) ? std::toupper(ch) : ch;

    // Toconvert the character to lowercase if it's uppercase
    char lowercasechar = std::isupper(ch) ? std::tolower(ch) : ch;

    // to check if the character is a digit
    bool isdigit = std::isdigit(ch);

    // to check if the character is a special symbol (anything that isn’t a letter or digit)
    bool isspecialsymbol = !std::isalnum(ch);

    // Output the results in a clear and readable format
    std::cout << "Character: " << ch << std::endl;
    std::cout << "Is vowel: " << (isvowel ? "Yes" : "No") << std::endl;
    std::cout << "Uppercase version: " << uppercasechar << std::endl;
    std::cout << "Lowercase version: " << lowercasechar << std::endl;
    std::cout << "Is digit: " << (isdigit ? "Yes" : "No") << std::endl;
    std::cout << "Is special symbol: " << (isspecialsymbol ? "Yes" : "No") << std::endl;

    return 0; // Return 0 to indicate successful completion of the program
}
