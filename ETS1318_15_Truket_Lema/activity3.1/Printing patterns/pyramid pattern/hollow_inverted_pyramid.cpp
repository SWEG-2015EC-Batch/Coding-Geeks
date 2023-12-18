#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows for the hollow inverted half pyramid: ";
    cin >> rows;

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (j == 1  j == i  i == rows) {
                cout << "* ";
            } else {
                cout << "  "; 
            }
        }
        cout << endl;
    }

    return 0;
}
