#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z') {
    cout << "The entered character is in uppercase." <<endl;
    }
    else if (ch >= 'a' && ch <= 'z') {
        std::cout << "The entered character is in lowercase." <<endl;
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "The entered character is a digit." <<endl;
        int digit = ch - '0';
        if (digit % 2 == 0) {
        cout << "The digit is even." <<endl;
        } else {
            cout << "The digit is odd." <<endl;
        }
    }
    else {
        cout << "The entered character is a special character." <<endl;
    }
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        char lowercaseChar = tolower(ch);
        switch (lowercaseChar) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                std::cout << "The alphabet is a vowel." <<endl;
                break;
            default:
            cout << "The alphabet is a consonant." <<endl;
        }
    }

    return 0;
}

