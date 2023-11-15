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




#include <iostream>

int main() {
    double tankCapacity, milesPerGallon;

    // Prompt the user for the capacity of the fuel tank
    std::cout << "Enter the capacity of the fuel tank in gallons: ";
    std::cin >> tankCapacity;

    // Prompt the user for the miles per gallon the automobile can be driven
    std::cout << "Enter the miles per gallon the automobile can be driven: ";
    std::cin >> milesPerGallon;

    // Calculate the number of miles the automobile can be driven without refueling
    double milesWithoutRefueling = tankCapacity * milesPerGallon;

    // Output the result
    std::cout << "The automobile can be driven for " << milesWithoutRefueling << " miles without refueling." << std::endl;

    return 0;
}
