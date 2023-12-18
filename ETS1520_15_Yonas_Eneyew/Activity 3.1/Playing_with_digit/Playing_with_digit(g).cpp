#include <iostream>
using namespace std;

int main() {
    int num, reversedNum = 0, originalNum;
    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;
    while (num > 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }
    if (originalNum == reversedNum) {
        cout << "The number is a palindrome." << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }

    return 0;
}
