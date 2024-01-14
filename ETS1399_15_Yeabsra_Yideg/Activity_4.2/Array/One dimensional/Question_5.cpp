#include <iostream>
using namespace std;

int main()
{
    double volts[] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};

    cout << "The values in the array are: " << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << volts[i] << "  ";

        if ((i + 1) % 3 == 0)
        {
            cout << endl;
        }
    }

    return 0;
}

