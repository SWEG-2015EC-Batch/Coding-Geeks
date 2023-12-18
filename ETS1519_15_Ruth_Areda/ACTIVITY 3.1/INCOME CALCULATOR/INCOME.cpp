#include <iostream>
using namespace std;

int main() {
    double grossSalary, workedHours, pension, netSalary, overtimeBonusRate, overtimePayment = 0;
    
    cout << "Enter gross salary: ";
    cin >> grossSalary;
    
    cout << "Enter worked hours: ";
    cin >> workedHours;
    
    if (grossSalary <= 200) {
        pension = 0;
        netSalary = grossSalary;
    } else if (grossSalary <= 600) {
        pension = grossSalary * 7 / 100;
        netSalary = grossSalary - pension - (grossSalary * 10 / 100);
    } else if (grossSalary <= 1200) {
        pension = grossSalary * 7 / 100;
        netSalary = grossSalary - pension - (grossSalary * 15 / 100);
    } else if (grossSalary <= 2000) {
        pension = grossSalary * 7 / 100;
        netSalary = grossSalary - pension - (grossSalary * 20 / 100);
    } else if (grossSalary <= 3500) {
        pension = grossSalary * 7 / 100;
        netSalary = grossSalary - pension - (grossSalary * 25 / 100);
    } else {
        pension = grossSalary * 7 / 100;
        netSalary = grossSalary - pension - (grossSalary * 30 / 100);
    }
    
    if (workedHours > 40) {
        cout << "Enter overtime bonus rate/hour: ";
        cin >> overtimeBonusRate;
        
        double extraHours = workedHours - 40;
        overtimePayment = extraHours * overtimeBonusRate;
    }
    
    netSalary += overtimePayment;
    
    cout << "Net-Pay of the employee: " << netSalary << endl;
    
    return 0;
}
