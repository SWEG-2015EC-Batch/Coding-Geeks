#include <iostream>
#include <string>
using namespace std;
int main() {
    const int MAX_PASSWORD_LENGTH = 20;
    char pass[MAX_PASSWORD_LENGTH];
    string storedPassword = "securepassword";
    strncpy(pass, storedPassword.c_str(), MAX_PASSWORD_LENGTH);
    cout << "Enter the password: ";
    string userInput;
    getline(cin, userInput);
    if (userInput == storedPassword) {
        cout << "Password is correct. Access granted.\n";
    } else {
        cout << "Incorrect password. Access denied.\n";
    }

    return 0;
}

