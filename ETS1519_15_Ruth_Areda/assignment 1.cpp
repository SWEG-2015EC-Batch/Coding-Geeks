// Q#1 - program that calculates body mass index
#include <iostream>
using namespace std;
int main()
{
	
	float hegight,H ,M ,BMI; // H is for hegiht and M is for mass
		cout<< "please enter the H" <<endl;
		cin>>H;
			cout<< "please enter MASS "<<endl;
		cin>>M;
		BMI=M/(H*H) ;
		cout<<"BMI "<<BMI; 
		return 0;
}

//Q#2 - Miles on a Full Tank Calculator
#include <iostream>
using namespace std;

int main() {
    double fuelTankCapacity, milesPerGallon;
    cout << "Enter the capacity in gallons of an automobile fuel tank: ";
    cin >> fuelTankCapacity;
    cout << "Enter the miles per gallons the automobiles can be driven: ";
    cin >> milesPerGallon;
    cout << "The automobile can be driven without refueling " << fuelTankCapacity * milesPerGallon << " miles." << endl;
    return 0;
}
//Q#3 - Uppercase Lowercase Letter Convertor
#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
    char c;
    cout << "Enter a letter: ";
    cin >> c;
    if (islower(c)) {
        cout << "The uppercase equivalent is " << char(toupper(c)) << endl;
    } else if (isupper(c)) {
        cout << "The lowercase equivalent is " << char(tolower(c)) << endl;
    } else {
        cout << "Invalid input" << endl;
    }
    return 0;

}
 // Qe4 Power Function Calculator
 #include<iostream>
#include<math.h>
using namespace std;
int main()
{
 int X, Y;
 cout<<" enter value for X ";
 cin>>X;
 cout<<" enter value for Y ";
 cin>>Y;
 int power= pow(X,Y);
 cout<<" power of the given number is "<<power;
 
}
// Qe5 Gross Salary, Net Salary & Bonus Payment Calculator
#include <iostream>
using namespace std;

int main() {
    string name;
    double weeklyWorkingHours, bonusRatePerHour, baseSalary, grossSalary, pension, tax, netSalary, bonusPayment;
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter weekly working hours: ";
    cin >> weeklyWorkingHours;
    cout << "Enter bonus rate per hour: ";
    cin >> bonusRatePerHour;
    cout << "Enter base salary: ";
    cin >> baseSalary;
    grossSalary = baseSalary + (weeklyWorkingHours * bonusRatePerHour);
    pension = 0.05 * grossSalary;
    tax = 0.15 * grossSalary;
    netSalary = grossSalary - pension - tax;
    bonusPayment = grossSalary - netSalary;
    cout << "Employee name: " << name << endl;
    cout << "Gross salary: $" << grossSalary << endl;
    cout << "Pension: $" << pension << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Net salary: $" << netSalary << endl;
    cout << "Bonus payment: $" << bonusPayment << endl;
    return 0;
}
//Qe5 File transmission ETA Calculator
#include <iostream>
#include <cmath>

int main() 
{
 const int transmissionRate = 960;
 double fileSizeBytes;
 double transmissionTimeSeconds = static_cast<double>(fileSizeBytes) / transmissionRate;
 int hours = static_cast<int>(transmissionTimeSeconds / 3600);
    int minutes = static_cast<int>((transmissionTimeSeconds - hours * 3600) / 60);
    int seconds = static_cast<int>(std::fmod(transmissionTimeSeconds, 60)); std::cout << "File Size: " << fileSizeBytes << " bytes\n";
    std::cout << "Transmission Rate: " << transmissionRate << " characters/second\n";
    std::cout << "Estimated Transmission Time: ";
    std::cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds\n";

    return 0;
}
