#include <iostream>
#include <string>
using namespace std;
int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    int start = 0;
    int end = word.length() - 1;
    bool isPalindrome = true;

    while (start <= end && isPalindrome) {
        if (word[start++] != word[end--]) {
            isPalindrome = false;
        }
    }

    cout << "The word " << word << " is " << (isPalindrome ? "" : "not ") << "a palindrome.\n";

    return 0;
}

