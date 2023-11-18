//QUESTION NUMBER 1 FINDING BMI
#include <iostream>

using namespace std;

int main()
{
float personHeight, personWeight, personBMI;
 cout<<"enter your height:";
cin>>personHeight;
cout<<"enter your weight:";
cin>>personWeight;
personBMI= (personWeight) / (personHeight*personHeight);
cout<<"your personBMI is:"<<personBMI<<endl;
    return 0;
}

//QUESTION NUMBER 2 FINDING NUMBER OF MILES WITHOUT REFUELING


// QUESTION NUMBER 3 CONVERTING UPPER CASE TO LOWER CASE
#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
    char input;
    cout << "Enter a letter: ";
    cin >> input;

    if (islower(input)) {
        cout << "The uppercase equivalent is: " << (char)toupper(input) << endl;
    } else if (isupper(input)) {
        cout << "The lowercase equivalent is: " << (char)tolower(input) << endl;
    } else {
        cout << "Invalid input. Please enter a letter." << endl;
    }

    return 0;
}


//QUESTION NUMBER 4 CALCULATING X^Y*


//QUESTION NUMBBER 5 FINDING NET,GROSS SALARY AND BONUS PAYMENT
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
    cout << "Please enter the employee's base_salary: ";
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
