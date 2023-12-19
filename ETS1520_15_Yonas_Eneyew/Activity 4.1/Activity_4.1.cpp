#include <iostream>
#include <cmath>

int main() {
    int count = 0;
    double sum = 0.0;
    double sumSquared = 0.0;
    double number, mean, stDev;
    
    std::cout << "Enter a list of numbers separated by spaces (press any alphabet to stop): ";
    
    while (std::cin >> number) {
        count++;
        sum += number;
        sumSquared += number * number;
        
        std::cout << number << "\n";
    }
    
    mean = sum / count;
    stDev = sqrt((sumSquared / count) - (mean * mean));
    
    std::cout << "Mean=" << mean << "\n";
    std::cout << "Standard Deviation= " << stDev << "\n";
    
    return 0;
}
