/*Prints the reverses of the number,Counts the number of digit sand Find the sum of the digits of a number*/
#include<iostream>
using namespace std; 
int main()
{
int num, temp; 
cout<<"Enter the number: "; 
cin>>num; 
int revers=0;
while(num>0)
{
temp=num%10;
revers=(revers*10)+temp; 
num=num/10;
}
cout<<"reverse"<<revers; 
return 0;
}
        //Find the product of even digits
#include <iostream>
using namespace std;

int find_product_of_even_digits(int num) {
    int product = 1;
    bool even_digit_found = false;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            product *= digit;
            even_digit_found = true;
        }
        num = num / 10;
    }

    if (!even_digit_found) {
        return -1;
    }

    return product;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int product = find_product_of_even_digits(num);
    if (product == -1) {
        cout << "No even digits found." << endl;
    } else {
        cout << "Product of even digits: " << product << endl;
    }

    return 0;
}
//Prints the first and the last digit of the number and find their sum.
#include <iostream>
using namespace std ;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int lastDigit = number % 10;
    while (number >= 10) {
        number /= 10;
    }
    int firstDigit = number;
    int sum = firstDigit + lastDigit;
    cout << "First digit: " << firstDigit <<endl;
    cout << "Last digit: " << lastDigit <<endl;
    cout << "Sum of the first and last digit: " << sum <<endl;

    return 0;
}
//Swap the first and the last digit of the number.
int swapFirstAndLastDigit(int num) {
    int digits = countDigits(num);
    if (digits <= 1) {
        return num;
    }

    int lastDigit = num % 10;
    int firstDigit = num / pow(10, digits - 1);
    int middlePart = num % static_cast<int>(pow(10, digits - 1)) / 10;

    return lastDigit * static_cast<int>(pow(10, digits - 1)) + middlePart * 10 + firstDigit;
}
//Check whether a number is palindrome or not.
#include <iostream>

bool isPalindrome(int number) {
    int originalNumber = number;
    int reversedNumber = 0;

    while (number > 0) {
        int lastDigit = number % 10;
        reversedNumber = reversedNumber * 10 + lastDigit;
        number /= 10;
    }

    return originalNumber == reversedNumber;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (isPalindrome(number)) {
        std::cout << number << " is a palindrome number." << std::endl;
    } else {
        std::cout << number << " is not a palindrome number." << std::endl;
    }

    return 0;
}
//Find the frequency of each digit in a given integer and print in table format.
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    int freq[10] = {0}; // frequency array with 10 elements, all initialized to 0

    while (number > 0) {
        int digit = number % 10; // get the last digit of the number
        freq[digit]++; // increment the frequency of the digit
        number /= 10; // remove the last digit of the number
    }

    cout << "Frequency of each digit:" << endl;
    cout << "Digit\tFrequency" << endl;

    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0) {
            cout << i << "\t" << freq[i] << endl;
        }
    }

    return 0;
}
//Check if a number is Armstrong or not
#include <iostream>
#include <cmath>
using namespace std;
int countDigits(int number) {
    int count = 0;
    while (number != 0) {
        number /= 10;
        count++;
    }
    return count;
}

bool isArmstrong(int number) {
    int originalNumber = number;
    int numDigits = countDigits(number);
    int sum = 0;

    while (number != 0) {
        int digit = number % 10;
        sum += pow(digit, numDigits);
        number /= 10;
    }

    return sum == originalNumber;
}

int main() {
    int number;
    cout<<"Enter a number: ";
    cin >> number;
    if (isArmstrong(number)) {
    cout << number << " is an Armstrong number." <<endl;
    } else {
    cout << number << " is not an Armstrong number." <<endl;
    }

    return 0;
}

//Check if a number is Strong or not
#include <iostream>

using namespace std;

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

bool isStrongNumber(int number) {
    int sum = 0;
    int num = number;

    while (num != 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    if (sum == number) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isStrongNumber(number)) {
        cout << "The number " << number << " is a strong number." << endl;
    } else {
        cout << "The number " << number << " is not a strong number." << endl;
    }

    return 0;
}
//Check whether a number is Perfect number or not
#include <iostream>
using namespace std;

bool isPerfectNumber(int number) {
    int sum = 0;
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    if (sum == number) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPerfectNumber(number)) {
        cout << "The number " << number << " is a perfect number." << endl;
    } else {
        cout << "The number " << number << " is not a perfect number." << endl;
    }

    return 0;
}

































