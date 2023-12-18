#include <iostream>
using namespace std;

int main() {
    double test, quiz, project, assignment, finalExam,totalMark;

    cout << "Enter your Test mark(15%): ";
    cin >> test;

    cout << "Enter your Quiz mark(5%): ";
    cin >> quiz;

    cout << "Enter your Project mark(20%): ";
    cin >> project;

    cout << "Enter your Assignment mark(10%): ";
    cin >> assignment;

    cout << "Enter your Final Exam mark(50%): ";
    cin >> finalExam;

    totalMark = test + quiz + project + assignment + finalExam;
// Output the total mark
    cout << "The total mark for the student is: " << totalMark << endl;

    // Determine the grade based on the total mark
    if (totalMark >= 90) {
        cout << "The student grade is A+" << endl;
    } else if (totalMark >= 80) {
        cout << "The student grade is A" << endl;
    } else if (totalMark >= 75) {
        cout << "The student grade is B+" << endl;
    } else if (totalMark >= 60) {
        cout << "The student grade is B" << endl;
    } else if (totalMark >= 55) {
        cout << "The student grade is C+" << endl;
    } else if (totalMark >= 45) {
        cout << "The student grade is C" << endl;
    } else if (totalMark >= 30) {
        cout << "The student grade is D" << endl;
    } else {
        cout << "The student grade is F" << endl;
    }

    return 0;
}
