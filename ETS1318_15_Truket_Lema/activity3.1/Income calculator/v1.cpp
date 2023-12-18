#include <iostream>
using namespace std;

int main() {
    double grossSalary, workedHours, taxRate, pension, incomeTax, netSalary, overtimeBonusRate, overtimePayment = 0;
    
    cout << "Enter gross salary: ";
    cin >> grossSalary;
    
    cout << "Enter worked hours: ";
    cin >> workedHours;
    
    cout << "Enter income tax rate: ";
    cin >> taxRate;
    
    pension = grossSalary * 7 / 100;
    incomeTax = grossSalary * taxRate;
    
    if (workedHours > 40) {
        cout << "Enter overtime bonus rate/hour: ";
        cin >> overtimeBonusRate;
        
        double extraHours = workedHours - 40;
        overtimePayment = extraHours * overtimeBonusRate;
    }
    
    netSalary = (grossSalary - pension - incomeTax) + overtimePayment;
    
    cout << "Net-Pay of the employee: " << netSalary << endl;
    
    return 0;
}
