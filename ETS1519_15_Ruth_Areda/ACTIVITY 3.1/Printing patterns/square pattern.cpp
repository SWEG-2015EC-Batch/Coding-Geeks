//full square
#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of rows for the full square: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {

        for (int j = 1; j <= n; ++j) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}
//hollow square
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of rows for the hollow square: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i == 1 || i == n || j == 1 || j == n) {
                std::cout << "* ";
            } else {
                std::cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}


