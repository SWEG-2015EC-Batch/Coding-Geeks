#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    int vowels = 0, consonants = 0;
    cout << "Enter a string: ";
    getline(cin, input);
    for (char c : input) {
        c = tolower(c);
        if (c == 'a'  c == 'e'  c == 'i'  c == 'o'  c == 'u') {
            vowels++;
        }
        else if (c >= 'a' && c <= 'z') {
            consonants++;
        }
    }
    cout << "The number of vowels is: " << vowels << "\n";
    cout << "The number of consonants is: " << consonants << "\n";
    return 0;
}
