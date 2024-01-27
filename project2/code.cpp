// A c++ program that accepts an uppercase or a lowercase letter from the user and prints a diamond shaped hollow pattern.
#include <iostream>
using namespace std;

int main() {
    char letter;

    cout << "Enter an uppercase letter ('A' to 'Z') or a lowercase letter ('a' to 'z'): ";
    cin >> letter;

    if (!((letter >= 'A' && letter <= 'Z')|| (letter >='a'&& letter<='z'))) {
        cout << "Error. Please enter an uppercase letter ('A' to 'Z') or a lowercase letter ('a' to 'z') :";
    } else{
    letter = toupper(letter);

    int n = letter - 'A' + 1; // calculate the number of rows from A to the letter
   //Prints the top half of the pattern.
    for (int i = n; i >= n; i--) {
        for (int j = 0; j <= i; j++)
            cout << " " << char('A' + j); // print a space and a letter from A to the current letter
        for (int k = i - 1; k >= 0; k--)
            cout <<" " << char('A' + k); // print a space and a letter from the current letter to A
        cout << endl;
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++)
            cout << " " << char('A' + j); // print a space and a letter from A to the current letter
        for (int s = n - 1; s >= i; s--)
            cout << "  ";
       for (int y = i; y < n - 1; y++)
            cout << "  ";
        for (int k = i; k >= 0; k--)
            cout << " " << char('A' + k); // print a space and a letter from the current letter to A
        cout << endl;
    }
// Prints the bottom half of the pattern.
    for (int i = 1; i <= n - 1; i++) {
        for (int j = 0; j <= i; j++)
            cout << " " << char('A' + j); // print a space and a letter from A to the current letter
        for (int s = n; s > i; s--)
            cout << "  ";
        for (int y = i; y <= n - 2; y++)
            cout << "  ";
        for (int k = i; k >= 0; k--)
            cout << " " << char('A' + k); // print a space and a letter from the current letter to A
        cout << endl;
    }

    for (int i = n; i >= n; i--) {
        for (int j = 0; j <= i; j++)
            cout << " " << char('A' + j); // print a space and a letter from A to the current letter
        for (int k = i - 1; k >= 0; k--)
            cout << " " << char('A' + k); // print a space and a letter from the current letter to A
        cout << endl;
    }
    }

    return 0;
}
