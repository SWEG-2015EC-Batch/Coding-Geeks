/*QUESTION NUMBER 1 FINDING BMI*/
#include<iostream>
using namespace  std;
int main() {
    float personHeight, personWeight, personBMI;
 cout<<"enter your height:";
cin>>personHeight;
cout<<"enter your weight:";
cin>>personWeight;
personBMI= (personWeight) / (personHeight*personHeight);
cout<<"your personBMI is:"<<personBMI<<endl;
  return 0;
}

/*QUESTION NUMBER 2 FINDING NUMBER OF MILES WITHOUT REFUELING*/
#include <iostream>
using namespace std;
int main() {
    double tankCapacity, milesPerGallon;

    // Prompt the user for the capacity of the fuel tank
    cout << "Enter the capacity of the fuel tank in gallons: ";
    cin >> tankCapacity;

    // Prompt the user for the miles per gallon the automobile can be driven
   cout << "Enter the miles per gallon the automobile can be driven: ";
   cin >> milesPerGallon;

    // Calculate the number of miles the automobile can be driven without refueling
    double milesWithoutRefueling = tankCapacity * milesPerGallon;

    // Output the result
   cout << "The automobile can be driven for " << milesWithoutRefueling << " miles without refueling." <<endl;

    return 0;
}

/*QUESTION NUMBER 3 CONVERTING UPPER CASE TO LOWER CASE*/

