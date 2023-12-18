#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (isalpha(ch)) {
        if (isupper(ch)) {
            cout << "The entered character is an uppercase alphabet." << endl;
        } else {
            cout << "The entered character is a lowercase alphabet." << endl;
        }
    } 
    else if (isdigit(ch)) {
        cout << "The entered character is a digit." << endl;
    } 
    else {
        cout << "The entered character is a special character." << endl;
    }

    return 0;
}
