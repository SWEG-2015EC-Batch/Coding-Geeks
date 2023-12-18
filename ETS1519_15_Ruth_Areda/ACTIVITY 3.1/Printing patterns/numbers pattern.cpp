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
//
