#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the array: " << endl;
    cin >> size;
    int numbers[size];
    cout << "Enter the numbers: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }
    cout << "The even numbers in the array in reverse order are: " << endl;
    for (int i = size - 1; i >= 0; i--)
    {
        if (numbers[i] % 2 == 0)
        {
            cout << numbers[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
