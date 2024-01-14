#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the arrays: " << endl;
    cin >> size;
    int array1[size];
    int array2[size];
    bool identical = true;
    cout << "Enter the data for the first array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array1[i];
    }
    cout << "Enter the data for the second array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> array2[i];
    }
    for (int i = 0; i < size; i++)
    {
        if (array1[i] != array2[i])
        {
            identical = false;
            break;
        }
    }
    if (identical)
    {
        cout << "The two arrays are identical." << endl;
    }
    else
    {
        cout << "The two arrays are not identical." << endl;
    }

    return 0;
}

