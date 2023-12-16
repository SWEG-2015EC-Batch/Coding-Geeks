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

    if (totalMark >= 90) {
        cout << "Your Total Mark is: " << totalMark << " and your Grade is: A+" << endl;
    } else if (totalMark >= 80) {
        cout << "Your Total Mark is: " << totalMark << " and your Grade is: A" << endl;
    } else if (totalMark >= 75) {
        cout << "Your Total Mark is: " << totalMark << " and your Grade is: B+" << endl;
    } else if (totalMark >= 60) {
        cout << "Your Total Mark is: " << totalMark << " and your Grade is: B" << endl;
    } else if (totalMark >= 55) {
        cout << "Your Total Mark is: " << totalMark << " and your Grade is: C+" << endl;
    } else if (totalMark >= 45) {
        cout << "Your Total Mark is: " << totalMark << " and your Grade is: C" << endl;
    } else if (totalMark >= 30) {
        cout << "Your Total Mark is: " << totalMark << " and your Grade is: D" << endl;
    } else {
        cout << "Your Total Mark is: " << totalMark << " and your Grade is1: F" << endl;
    }

    return 0;
}
