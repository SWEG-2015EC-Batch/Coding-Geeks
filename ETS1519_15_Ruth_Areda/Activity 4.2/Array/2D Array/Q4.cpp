#include <iostream>
int main() {
    const int rows = 3;
    const int columns = 4;
    int array2D[rows][columns];
    std::cout << "Enter elements for a 3x4 array:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            std::cout << "Enter element at position [" << i << "][" << j << "]: ";
            std::cin >> array2D[i][j];
        }
    }
    int sumEven = 0;

    std::cout << "\nArray with odd elements replaced by '*':\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < columns; ++j) {
            if (array2D[i][j] % 2 ==! 0) {
                std::cout << "*\t";
                sumEven += array2D[i][j];
            } else {
                std::cout << array2D[i][j] << "\t";
            }
        }
        std::cout << "\n";
    }

    std::cout << "\nSum of even elements: " << sumEven << "\n";

    return 0;
}
