#include <iostream>
#include <string>
using namespace std;
int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;
    int start, end;
    start = 0;
    end = word.length() - 1;
    bool isPalindrome;
    isPalindrome = true;
    while (start <= end) {
        if (word[start] != word[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }
    cout << "The word " << word << " ";
    if (isPalindrome) {
        cout << "is a palindrome.\n";
    }
    else {
        cout << "is not a palindrome.\n";
    }
    return 0;
}  
