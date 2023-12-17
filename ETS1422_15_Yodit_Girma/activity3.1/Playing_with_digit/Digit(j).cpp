#include <iostream>
using namespace std;

int main() {
    int num, originalNum, remainder, result = 0, fact;
    cout << "Enter a number: ";
    cin >> num;
    
    originalNum = num;
    while (originalNum != 0) {
        remainder = originalNum % 10;
        fact = 1;
        for (int i = 1; i <= remainder; i++) {
            fact *= i;
        }
        
        result += fact;
        originalNum /= 10;
    }
    if (result == num) {
        cout << num << " is a Strong number." << endl;
    } else {
        cout << num << " is not a Strong number." << endl;
    }
    
    return 0;
}
