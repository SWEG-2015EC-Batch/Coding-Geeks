#include <iostream>
#include <iomanip>
using namespace std;
const int SIZE = 9;
const int COLUMNS = 3;

int main() {
    double volts[SIZE] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};

    cout<< "Data in table form:"<<endl;
   cout <<fixed <<setprecision(2);

    for (int i = 0; i < SIZE; i++) {
       cout <<setw(8) << volts[i] << " ";

        if ((i + 1) % COLUMNS == 0) {
            cout <<endl;
        }
    }

    return 0;
}
