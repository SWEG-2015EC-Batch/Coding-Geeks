#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows for the rectangular pattern: ";
    cin >> rows;
    cout << "Enter the number of columns for the rectangular pattern: ";
    cin >> cols;

    char letter = 'A';

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << letter << " ";
            letter++;
            if (letter > 'Z') {
                letter = 'A';
            }
        }
        cout << endl;
    }

    return 0;
}




