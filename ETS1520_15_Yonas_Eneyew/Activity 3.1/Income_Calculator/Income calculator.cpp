#include <iostream>
using namespace std;

int main() {
    double hourlyRate = 16.78;
    double overtimeRate = hourlyRate * 1.5;
    double socialSecurityTaxRate = 0.06;
    double federalIncomeTaxRate = 0.14;
    double stateIncomeTaxRate = 0.05;
    double unionDues = 10.0;
    double healthInsuranceCost = 35.0;

    double hoursWorked, dependents;
    cout << "Enter the number of hours worked in a week: ";
    cin >> hoursWorked;
    cout << "Enter the number of dependents: ";
    cin >> dependents;

    double grossPay = 0.0;
    if (hoursWorked <= 40) {
        grossPay = hoursWorked * hourlyRate;
    } else {
        double overtimeHours = hoursWorked - 40;
        grossPay = (40 * hourlyRate) + (overtimeHours * overtimeRate);
    }

    double socialSecurityTax = grossPay * socialSecurityTaxRate;
    double federalIncomeTax = grossPay * federalIncomeTaxRate;
    double stateIncomeTax = grossPay * stateIncomeTaxRate;
    double totalWithholdings = socialSecurityTax + federalIncomeTax + stateIncomeTax + unionDues;

    if (dependents >= 3) {
        totalWithholdings += healthInsuranceCost;
    }

    double netPay = grossPay - totalWithholdings;

    cout << "Gross Pay: $" << grossPay << endl;
    cout << "Social Security Tax: $" << socialSecurityTax << endl;
    cout << "Federal Income Tax: $" << federalIncomeTax << endl;
    cout << "State Income Tax: $" << stateIncomeTax << endl;
    cout << "Union Dues: $" << unionDues << endl;
    if (dependents >= 3) {
        cout << "Health Insurance Cost: $" << healthInsuranceCost << endl;
    }
    cout << "Total Withholdings: $" << totalWithholdings << endl;
    cout << "Net Take-home Pay: $" << netPay << endl;

    return 0;
}
