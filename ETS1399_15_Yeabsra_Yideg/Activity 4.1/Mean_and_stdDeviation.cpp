#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    double sum = 0;
    double sumSquared = 0;

    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        double num;
        cin >> num;
        sum += num;
        sumSquared += num * num;
        cout << num << " ";
    }

    double mean = sum / n;
    double variance = (sumSquared / n) - (mean * mean);
    double stdDeviation = sqrt(variance);

    cout << "\nThe mean of the entered numbers is: " << mean << endl;
    cout << "The standard Deviation of the entered numbers is: " << stdDeviation << endl;

    return 0;
}
