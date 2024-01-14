#include<iostream>
using namespace std;

int main()
{
    int size1, size2;
    cout << "Enter the size of the first array: ";
    cin >> size1;
    int array1[size1];
    cout << "Enter the data for the first array: " << endl;
    for (int i = 0; i < size1; i++)
    {
        cin >> array1[i];
    }

    cout << "Enter the size of the second array: ";
    cin >> size2;
    int array2[size2];
    cout << "Enter the data for the second array: " << endl;
    for (int i = 0; i < size2; i++)
    {
        cin >> array2[i];
    }

    bool identical = true;
    if (size1 != size2)
    {
        identical = false;
    }
    else
    {
        for (int i = 0; i < size1; i++)
        {
            if (array1[i] != array2[i])
            {
                identical = false;
                break;
            }
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
