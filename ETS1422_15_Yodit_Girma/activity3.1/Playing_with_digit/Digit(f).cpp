#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, firstDigit, lastDigit, digits = 0, temp;
    cout << "Enter a number: ";
    cin >> num;
    lastDigit = num % 10;
    temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    firstDigit = num / pow(10, digits-1);
    num = num - (firstDigit * pow(10, digits-1)) - lastDigit + (lastDigit * pow(10, digits-1)) + firstDigit;
    cout << "Number after swapping first and last digit: " << num << endl;

    return 0;
}
