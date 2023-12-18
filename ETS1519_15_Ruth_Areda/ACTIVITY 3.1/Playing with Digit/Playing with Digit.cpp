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








