#include <iostream>
using namespace std;

int main()
{
int row, column;

    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> column;
    int first[row][column];
    int second[row][column];
    int sum[row][column];
    cout << "Enter the data for the first array: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> first[i][j];
        }
    }
    cout << "Enter the data for the second array: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> second[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            sum[i][j] = first[i][j] + second[i][j];
        }
    }
    cout << "The sum of the two arrays is: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
