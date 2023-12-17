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
        switch (ch) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                cout << "The entered character is a vowel." << endl;
                break;
            default:
                cout << "The entered character is a consonant." << endl;
                break;
        }
    } 
    else if (isdigit(ch)) {
        int digit = ch - '0';
        if (digit % 2 == 0) {
            cout << "The entered character is a digit and it is even." << endl;
        } else {
            cout << "The entered character is a digit and it is odd." << endl;
        }
    } 
    else {
        cout << "The entered character is a special character." << endl;
    }

    return 0;
}
