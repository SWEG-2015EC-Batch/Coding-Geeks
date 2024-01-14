#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    int vowelCount = 0, consonantCount = 0, digitCount = 0, specialCharCount = 0;
    for (char ch : inputString) {
        if (isalpha(ch)) {
            char lowercaseCh = tolower(ch);
            if (lowercaseCh == 'a' || lowercaseCh == 'e' || lowercaseCh == 'i' || lowercaseCh == 'o' || lowercaseCh == 'u') {
                ++vowelCount;
            } else {
                ++consonantCount;
            }
        } else if (isdigit(ch)) {
            ++digitCount;
        } else if (ispunct(ch) || isspace(ch)) {
            ++specialCharCount;
        }
    }
    cout << "\nFrequency Analysis:\n";
    cout << "Vowel Count: " << vowelCount << "\n";
    cout << "Consonant Count: " << consonantCount << "\n";
    cout << "Digit Count: " << digitCount << "\n";
    cout << "Special Character Count: " << specialCharCount << "\n";
  

    return 0;
}

