#include <iostream>
#include <string>
using namespace std;
int main() {
    string inputString;
    int vowelCount = 0, consonantCount = 0;
   cout << "Enter a string: ";
    getline(cin, inputString);
    for (char ch : inputString) {
        ch = tolower(ch);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                ++vowelCount;
            } else {
                ++consonantCount;
            }
        }
    }
    cout << "\nResults:\n";
     cout << "---------------------------\n";
    cout << "Input String: " << inputString << "\n";
    cout << "Vowel Count: " << vowelCount << "\n";
    cout << "Consonant Count: " << consonantCount << "\n";
    cout << "---------------------------\n";

    return 0;
}

