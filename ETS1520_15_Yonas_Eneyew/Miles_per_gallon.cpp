#include <iostream>
using namespace std;
int main()
{double tankCapacity, milesPerGallon;

    
     cout << "Enter the capacity of the fuel tank in gallons: ";
    cin >> tankCapacity;

    
    cout << "Enter the miles per gallon that the automobile can be driven: ";
    cin >> milesPerGallon;

    
    double milesWithoutRefueling = tankCapacity * milesPerGallon;

    
    cout << "The automobile can be driven for about " << milesWithoutRefueling << " miles without refueling." << std::endl;

return 0;
}
