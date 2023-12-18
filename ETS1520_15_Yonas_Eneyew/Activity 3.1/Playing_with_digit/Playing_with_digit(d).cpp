#include <iostream>
using namespace std;

int main() {
    int num, digit, product = 1;
    cout << "Enter a number: ";
    cin >> num;
    while (num > 0) {
        digit = num % 10;
        if (digit % 2 == 0) {
            product *= digit;
        }
        num /= 10;
    }
    cout << "Product of even digits: " << product << endl;

    return 0;
}
