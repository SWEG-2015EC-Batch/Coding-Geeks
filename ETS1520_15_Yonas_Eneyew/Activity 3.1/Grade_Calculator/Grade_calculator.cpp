#include <iostream>
#include <vector>
using namespace std;

char calculateGrade(int midMark, int finalMark) {
    double totalMark = (midMark + finalMark) * 100 / 100.0;
    if (totalMark >= 90) {
        return 'A';
    } else if (totalMark >= 80) {
        return 'B';
    } else if (totalMark >= 70) {
        return 'C';
    } else if (totalMark >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    vector<int> midMarks(20);
    vector<int> finalMarks(20);

    for (int i = 0; i < 20; i++) {
        int midAttempts = 0;
        do {
            cout << "Enter the mid-term mark for student " << i + 1 << " [0-40]: ";
            cin >> midMarks[i];
            if (midMarks[i] < 0 || midMarks[i] > 40) {
                cout << "Mid-term mark should be in the range of 0-40. ";
                midAttempts++;
            }
            if (midAttempts == 3) {
                cout << "You have exceeded the maximum number of attempts for mid-term mark. Exiting." << endl;
                return 1;
            }
        } while (midMarks[i] < 0 || midMarks[i] > 40);

        int finalAttempts = 0;
        do {
            cout << "Enter the final exam mark for student " << i + 1 << " [0-60]: ";
            cin >> finalMarks[i];
            if (finalMarks[i] < 0 || finalMarks[i] > 60) {
                cout << "Final exam mark should be in the range of 0-60. ";
                finalAttempts++;
            }
            if (finalAttempts == 3) {
                cout << "You have exceeded the maximum number of attempts for final exam mark. Exiting." << endl;
                return 1;
            }
        } while (finalMarks[i] < 0 || finalMarks[i] > 60);
    }

    cout << "Letter grades of the students:" << endl;
    for (int i = 0; i < 20; i++) {
        char grade = calculateGrade(midMarks[i], finalMarks[i]);
        cout << "Student " << i + 1 << ": " << grade << endl;
    }

    return 0;
}
