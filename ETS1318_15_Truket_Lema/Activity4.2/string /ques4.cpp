#include <iostream>
#include <string>
using namespace std;
int main() {
    string line;
    cout << "Enter a line of text: ";
    getline(cin, line);
    string token;
    int length = line.length();
    for (int i = 0; i < length; i++) {
        if (line[i] == ' ') {
            cout << "Token: " << token << "\n";
            token = "";
        } else {
            token += line[i];
        }
    }
    cout << "Token: " << token << "\n";
    return 0;
} 
