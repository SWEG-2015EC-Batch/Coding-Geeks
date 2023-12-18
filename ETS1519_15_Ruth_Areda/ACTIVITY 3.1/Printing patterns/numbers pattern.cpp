//1to 5 square
#include <iostream>
using namespace std;
int main() {
    int rows = 5;
    int columns = 5;
    for (int i = 1; i <= rows; ++i) {

        for (int j = 1; j <= columns; ++j) {
        
            cout << j;
            if (j < columns) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
//half 
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows for the half pyramid: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
//inverted
#include <iostream>
using namespace std;

int main() {
    int rows;
    cout << "Enter the number of rows for the inverted half pyramid: ";
    cin >> rows;

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
