#include <iostream>
#include <cctype>

int main() {
    char inputChar;

    
    std::cout << "Enter a letter: ";
    std::cin >> inputChar;


    if (std::isalpha(inputChar)) {
        // Convert to uppercase
        char uppercaseChar = std::toupper(inputChar);
        std::cout << "Uppercase equivalent: " << uppercaseChar << std::endl;


        char lowercaseChar = std::tolower(inputChar);
        std::cout << "Lowercase equivalent: " << lowercaseChar << std::endl;
    } else {
        std::cout << "Please enter a valid letter." << std::endl;
    }

    return 0;
}
