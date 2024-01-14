#include <iostream>
using namespace std;


int main() {
    int n;
    int ROWS ;
    int COLS ;
     cout << "Enter the number of rows and columns of the array: " << endl;
    cin >> ROWS >> COLS;
    int arr[ROWS][COLS];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> arr[i][j];
        }
    }

    // Display the array
    cout << "The array is:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Calculate and display the product of each row
    for (int i = 0; i < ROWS; i++) {
        int rowProduct = 1;
        for (int j = 0; j < COLS; j++) {
            rowProduct *= arr[i][j];
        }
        cout << "Product of elements in row " << i << ": " << rowProduct << endl;
    }

    // Calculate and display the sum of each column
    for (int j = 0; j < COLS; j++) {
        int colSum = 0;
        for (int i = 0; i < ROWS; i++) {
            colSum += arr[i][j];
        }
        cout << "Sum of elements in column " << j << ": " << colSum << endl;
    }


    return 0;
}

