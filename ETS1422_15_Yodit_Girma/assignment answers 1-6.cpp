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



/*QUESTION NUMBER 4 CALCULATING X^Y*/
4, #include<iostream.h>
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
 
}


/*QUESTION NUMBBER 5 

