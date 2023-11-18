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

// Question 3
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
