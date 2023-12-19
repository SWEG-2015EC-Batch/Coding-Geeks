#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Variables to keep track of sum and sum of squares
    double sum = 0;
    double sumOfSquares = 0;

    // Input loop to accept numbers from the user and calculate sum and sum of squares
    cout << "Enter the numbers: ";

    for (int i = 0; i < n; i++) {
        double num;
        cin >> num;
        sum += num; // Calculate the sum
        sumOfSquares += pow(num, 2); // Calculate the sum of squares
    }

    // Calculate the mean and standard deviation
    double mean = sum / n;
    double variance = (sumOfSquares / n) - pow(mean, 2);
    double stdDev = sqrt(variance);

    // Print the mean and standard deviation
    cout << "Mean: " << mean << endl;
    cout << "Standard Deviation: " << stdDev << endl;

    return 0;
}
