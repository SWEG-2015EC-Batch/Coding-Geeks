#include <iostream>
using namespace std;
const int MAX_SIZE = 100;

int main() {
    int numbers[MAX_SIZE];
    int num;
    int count = 0;

    cout << "Enter numbers (enter 0 to stop):" <<endl;
    while (count < MAX_SIZE) {
        cin >> num;
        if (num == 0)
            break;
        numbers[count] = num;
        count++;
    }

    cout << "Even numbers in reverse order: " <<endl;
    for (int i = count - 1; i >= 0; i--) {
        if (numbers[i] % 2 == 0) {
            cout << numbers[i] <<endl;
        }
    }

    return 0;
}
