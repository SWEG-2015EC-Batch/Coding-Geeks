#include <iostream>
using namespace std;
int main() {
    int startNo = 10;
    int endNo = 49;
    int dimension;
    cout << "Enter the dimension of the pattern"<<endl;
    cin >> dimension;
        if (dimension <= 0) {
          cout << "Invalid dimension. Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }
    for (int i = startNo; i <= endNo; ++i) {
        cout << i << " ";
                if (i % dimension == 0) {
           cout <<endl;
        }
    }

    return 0;
}
