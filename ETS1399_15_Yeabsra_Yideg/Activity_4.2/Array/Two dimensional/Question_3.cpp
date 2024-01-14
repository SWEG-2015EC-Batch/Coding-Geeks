#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of students: ";
    cin >> rows;
    cout << "Enter the number of exams : ";
    cin >> cols;

    int scores[rows][cols];
    for (int i = 0; i < rows; i++) {
        cout << "Enter scores for student " << i + 1 << ":" << endl;
        for (int j = 0; j < cols; j++) {
            cin >> scores[i][j];
        }
    }

    cout << "Student\tTotal\tLevel" << endl;
    for (int i = 0; i < rows; i++) {
        int total = 0;
        for (int j = 0; j < cols; j++) {
            total += scores[i][j];
        }
        
        string level;
        if (total >= 80) {
            level = "Excellent";
        } else if (total >= 60) {
            level = "Very Good";
        } else if (total >= 50) {
            level = "Fair";
        } else if (total >= 40) {
            level = "Poor";
        } else {
            level = "Fail";
        }
        
        cout << i + 1 << "\t" << total << "\t" << level << endl;
    }

    return 0;
}

