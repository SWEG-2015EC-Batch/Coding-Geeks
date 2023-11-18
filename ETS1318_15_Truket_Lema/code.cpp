#1. write a program that calculates and display body mass index (BMI) of a person. The program should read the height and weight of a person being given and display by the BMI.
#include <iostream>
using namespace std;
int main()
{
float person_Height, person_Weight, person_BMI;
 cout<<"enter your height:";
cin>>person_Height;
cout<<"enter your weight:";
cin>>person_Weight;
person_BMI= (person_Weight) / (person_Height*person_Height);
cout<<"your person_BMI is:"<<person_BMI;
 return 0;
}
#2. Write a program that prompts the capacity in gallons of automobile fuel tank and the miles per gallons the automobile can be driven. The program outputs the number miles the automobile can be driven without refueling
#include<iostream>
using namespace std;
int main()
{
    float tank_Capacity, miles_Per_Gallon, miles;
    // enter  the capacity of the fuel tank
    cout << "Enter the capacity of the fuel tank in gallons: ";
    cin >> tank_Capacity;
    // enter miles per gallon the automobile can be driven
    cout << "Enter the miles per gallon the automobile can be driven: ";
    cin >> miles_Per_Gallon;
    // miles the automobile can be driven without refueling 
   miles = tank_Capacity * miles_Per_Gallon;
    cout << "Miles : " << " miles " << endl;
    return 0;
}
 #3.write a program that coverts  letter entered from keyboard to its uppercase of lowercase equivalent (hint :- use the function defined in ctype.h library header file).
#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
    char inputLetter;
    cout << "Enter a letter: ";
    cin >> inputLetter;

    // Convert to uppercase
    char upperCaseLetter = toupper(inputLetter);
    cout << "Uppercase equivalent: " << upperCaseLetter << endl;

    // Convert to lowercase
    char lowerCaseLetter = tolower(inputLetter);
    cout << "Lowercase equivalent: " << lowerCaseLetter << endl;

    return 0;
}
#4. write a program that find the result of expression x^y where the value of x and y are entered by the user.
#include<iostream.h>
#include<math.h>
int main()
{
 int X, Y;
 cout<<" enter value for X ";
 cin>>X;
 cout<<" enter value for Y ";
 cin>>Y;
 int power= pow(X,Y);
 cout<<" power of the given number is "<<power;
return 0;
}
#5. Design an algorithm and write to read an employee name weekly working hours, bonus rate per hour, and base salary and find the employees gross salary, net salary, and bonus payment. (Hint: pension rate =5%, tax =15%)
#include <iostream>
using namespace std;
int main()
{
    // Input employee's information
    string full_name;
    float weekly_hours, bonus_rate, base_salary;
    cout << "Please enter the employee's full name: ";
    getline(cin, full_name);
    cout << "Please enter the employee's weekly working_hours: ";
    cin >> weekly_hours;
    cout << "Please enter the employee's bonus _rate_per_hour: ";
    cin >> bonus_rate;
]    cout << "Please enter the employee's base_salary: ";
    cin >> base_salary;
    // Calculate gross salary
    float gross_salary = (weekly_hours * base_salary) + (bonus_rate * weekly_hours);
  // Calculate deductions
  float pension_deduction = 0.05 * gross_salary;
  float tax_deduction = 0.15 * gross_salary;
    // Calculate net salary
   float net_salary = gross_salary - (pension_deduction + tax_deduction);
     // Calculate bonus payment
    float  bonus_payment = bonus_rate * weekly_hours;
     cout << "Employee's Name: " << full_name << endl;
    cout << "Gross_Salary: " << gross_salary << endl;
    cout << "Net_Salary: " << net_salary << endl;
    cout << "Bonus_Payment: " << bonus_payment << endl;
    return 0;
}
#6. A serial transmission line can transmit 960 characters a second. Write a program that will calculate how long it takes to send a file, given a file size. Test your program on a 400mb(419,430,400 byte) file which may take days.
#include<iostream>
using namespace std;
int main()

{
    int file_size, transmission_time;
    int seconds, minutes, hours, days;
 const int transmission_rate = 960; // characters per second
  cout<<" enter the size of the file in bytes: ";
 cin>>file_size;
 transmission_time = file_size / transmission_rate;
 seconds = file_size / transmission_rate;
minutes = seconds / 60;
hours = minutes / 60;
days = hours / 24;
   cout << "transmission time in Seconds: " << seconds << endl;
    cout << "transmission time in Minutes: " << minutes << endl;
    cout << "transmission time in Hours: " << hours << endl;
    cout << "transmission time in Days: " << days << endl;
    return 0;
}

