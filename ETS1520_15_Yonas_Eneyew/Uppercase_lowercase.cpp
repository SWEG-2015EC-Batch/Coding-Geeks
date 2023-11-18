#include <iostream>
#include <cmath>

int main() {
    double base, exponent;

    cout << "Enter the value of X: ";
    cin >> base;

    cout << "Enter the value of Y: ";
    cin >> exponent;

    double result = pow(base, exponent);

    std::cout << "Result of " << base << "^" << exponent << " is: " << result << std::ndl;

    return 0;
}
