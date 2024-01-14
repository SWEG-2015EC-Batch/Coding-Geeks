#include <iostream>
using namespace std;

int main() {
    int arr[3][4];
    int sum = 0;
    cout << "Enter the values for the array:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] % 2 == 0) {
                sum += arr[i][j];
            }
        }
    }
    cout << "The sum of even elements is: " << sum << "\n";
    cout << "The array with even elements and '*' for odd elements is:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (arr[i][j] % 2 == 0) {
                cout << arr[i][j] << " ";
            } else {
                cout << "* ";
            }
        }
        cout << "\n";
    }
    return 0;
}
