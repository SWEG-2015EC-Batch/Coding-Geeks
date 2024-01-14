#include <iostream>
#include <string>
using namespace std;
int main() {
    string input;
    string output = "";
    cout << "Enter a string: ";
    getline(cin, input);
    for (char c : input) {
        if (isalpha(c)) {
            output += c;
        }
    }
    cout << "The output string is: " << output << "\n";
    return 0;
}
