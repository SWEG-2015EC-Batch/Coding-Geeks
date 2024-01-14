#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    string resultString;
    for (char ch : inputString) {
        if (isalpha(ch)) {
            resultString += ch;
        }
    }
    cout << "\nOriginal String: " << inputString << "\n";
    cout << "String with non-alphabet characters removed: " << resultString << "\n";

    return 0;
}

