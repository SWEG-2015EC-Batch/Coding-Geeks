#include <iostream>
#include <string>
using namespace std;
int main() {
    string inputText;
    cout << "Enter a line of text: ";
    getline(cin, inputText);
    cout << "\nText in Uppercase: ";
    for (char& c : inputText) {
        cout << static_cast<char>(toupper(c));
    }
    cout << "\nText in Lowercase: ";
    for (char& c : inputText) {
        cout << static_cast<char>(tolower(c));
    }

    cout << "\n";

    return 0;
}

