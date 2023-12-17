#include <iostream>
using namespace std;

int main() {
    int num, firstDigit, lastDigit, sum;
    cout << "Enter a number: ";
    cin >> num;
    lastDigit = num % 10;
    while (num >= 10) {
        num /= 10;
    }
    firstDigit = num;
    sum = firstDigit + lastDigit;
    cout << "First digit: " << firstDigit << endl;
    cout << "Last digit: " << lastDigit << endl;
    cout << "Sum of first and last digit: " << sum << endl;
    
    return 0;
}
