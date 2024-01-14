#include <iostream>
using namespace std;
int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;

    cout << "Enter the number of columns: ";
   cin >> cols;

    int first[rows][cols];
    int second[rows][cols];
    int result[rows][cols];

  cout << "Enter elements of the first array"<<endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
           cout << "Enter element [" << i << "][" << j << "]: ";
           cin >> first[i][j];
        }
    }

   cout << "Enter elements of the second array "<<endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
           cout << "Enter element [" << i << "][" << j << "]: ";
           cin >> second[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = first[i][j] + second[i][j];
        }
    }
  
    cout << "Result array:"<<endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << "\t";
        }
        cout <<endl;
    }

    return 0;
}
