#include <iostream>
using namespace std;

int main()
{
    
    int temp[8];
    int total = 0;
    double average = 0.0;
    cout << "Enter 8 numbers: " << endl;
    for (int i = 0; i < 8; i++)
    {
        cin >> temp[i];
        total += temp[i];
    }
    average = (double)total / 8;
    cout << "The numbers are: " << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << temp[i] << " ";
    }
    cout << endl;
    cout<<"Total sum of the numbers is: "<<total<<endl;
    cout << "The average is: " << average << endl;

    return 0;
}
