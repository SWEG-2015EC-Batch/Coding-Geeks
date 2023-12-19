//Print the input numbers ,Compute and print the mean, and standard deviation
#include <iostream>
#include <cmath> 
using namespace std;
int main() {
    int count = 0; 
    double sum = 0; 
    double sumOfSquares = 0; 
    cout << "Enter a list of numbers. Enter a non-numeric value to stop.\n";
    while (true) {
        double num;
        if (cin >> num) {
            count++;
            sum += num;
            sumOfSquares += num * num;
            cout << "You entered: " << num <<endl;
        } else {
            break;
        }
    }
    if (count == 0) {
        cout << "No numbers entered. Cannot calculate mean and standard deviation.\n";
    } else {
        double mean = sum / count;
        double variance = (sumOfSquares / count) - (mean * mean);
        double standardDeviation = sqrt(variance);
        cout << "Mean: " << mean <<endl;
        cout << "Standard Deviation: " << standardDeviation <<endl;
    }
    return 0;
}

