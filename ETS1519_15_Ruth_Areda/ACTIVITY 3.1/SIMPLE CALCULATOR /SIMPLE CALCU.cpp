#include <iostream>
int main() {
    char operation;
    double number1,  number2, result;
    do {
        std::cout << "Enter operator (+, -, *, /) and operands ( number1  number2): ";
        std::cin >> operation;
        if (operation == '0') {
            std::cout << "Exiting the calculator program." << std::endl;
            break;
        }

        if (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
            std::cout << "Invalid operator. Please enter a valid operator." << std::endl;
            continue;
        }
          std::cout<<"Enter number1:";
        std::cin >> number1;
        std::cout<<"Enter number2:";
		std::cin>>  number2;
        switch (operation) {
            case '+':
                result =  number1 +  number2;
                break;
            case '-':
                result = number1 -  number2;
                break;
            case '*':
                result =  number1 *  number2;
                break;
            case '/':
                if ( number2 == 0) {
                    std::cout << "Error: Division by zero is not allowed." << std::endl;
                    continue;
                }
                result =  number1 /  number2;
                break;
            default:
                std::cout << "Invalid operator. Please enter a valid operator." << std::endl;
                continue;
        }

        std::cout << "Result: " << result << std::endl;

    } while (true);

    return 0;
}

