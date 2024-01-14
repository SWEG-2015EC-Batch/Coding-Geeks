#include <iostream>
#include <string>

using namespace std;
int main() {
    string input;
    int vowel = 0, consonant = 0, digit = 0, special = 0;
    cout << "Enter a string: ";
    getline(cin, input);
    for (char c : input) {
        c = tolower(c);
        if (c == 'a'  c == 'e'  c == 'i'  c == 'o'  c == 'u') {
            vowel++;
        }
        else if (c >= 'a' && c <= 'z') {
            consonant++;
        }
        else if (c >= '0' && c <= '9') {
            digit++;
        }
        else {
            special++;
        }
    }
    cout << "The frequency of vowel is: " << vowel << "\n";
    cout << "The frequency of consonant is: " << consonant << "\n";
    cout << "The frequency of digit is: " << digit << "\n";
    cout << "The frequency of special character is: " << special << "\n";

    return 0;
}


