#include <iostream>
using namespace std;
int main()
{
    
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
    
    float gross_salary = (weekly_hours * base_salary) + (bonus_rate * weekly_hours);
  
  float pension_deduction = 0.05 * gross_salary;
  float tax_deduction = 0.15 * gross_salary;
    
   float net_salary = gross_salary - (pension_deduction + tax_deduction);
     
    float  bonus_payment = bonus_rate * weekly_hours;
     cout << "Employee's Name: " << full_name << endl;
    cout << "Gross_Salary: " << gross_salary << endl;
    cout << "Net_Salary: " << net_salary << endl;
    cout << "Bonus_Payment: " << bonus_payment << endl;

    return 0;
}
