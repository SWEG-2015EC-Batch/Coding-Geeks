#include <iostream>
using namespace std;
int main()
{
    float num1, num2, result, Sum, Difference, Product, Quotient;
    char op;
    //input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;
    //switch
    switch (op)
    {
    case '+':
        result = num1 + num2;
        cout << "Sum= " << result << endl;
        break;

    case '-':
        result = num1 - num2;
        cout << "Difference= " << result << endl;
        break;

    case '*':
        result = num1 * num2;
        cout << "Product= " << result << endl;
        break;

    case '/':
        if (num2 = 0)
        {
            result = num1 / num2;
            cout << "Quotient= " << result << endl;
        }

        else
        {
            cout << "Error: A number can't be divided by zero." << endl;
        }

        break;
    default:
        cout << "Error: Invalid operator." << endl;
    }

    return 0;
}