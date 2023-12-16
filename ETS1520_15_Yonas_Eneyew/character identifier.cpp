#include <iostream>
#include <cctype>

bool isUppercase(char ch) {
    return std::isupper(ch);
}

bool isLowercase(char ch) {
    return std::islower(ch);
}

bool isDigit(char ch) {
    return std::isdigit(ch);
}

bool isSpecialChar(char ch) {
    return !std::isalnum(ch);
}

bool isVowel(char ch) {
    ch = std::tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

std::string isEvenOdd(char ch) {
    return (ch % 2 == 0) ? "even" : "odd";
}

int main() {
    char character;

    std::cout << "Enter a character: ";
    std::cin >> character;

    if (isUppercase(character)) {
        std::cout << "The character is uppercase." << std::endl;
    } else if (isLowercase(character)) {
        std::cout << "The character is lowercase." << std::endl;
    } else if (isDigit(character)) {
        std::cout << "The character is a digit." << std::endl;
        std::cout << "The digit is " << isEvenOdd(character) << "." << std::endl;
    } else if (isSpecialChar(character)) {
        std::cout << "The character is a special character." << std::endl;
    } else {
        if (std::isalpha(character)) {
            if (isVowel(character)) {
                std::cout << "The character is a vowel." << std::endl;
            } else {
                std::cout << "The character is a consonant." << std::endl;
            }
        } else {
            std::cout << "Invalid input. Please enter a valid character." << std::endl;
        }
    }

    return 0;
}