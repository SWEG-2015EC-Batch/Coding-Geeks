#include <iostream>
#include <iomanip>
using namespace std;
string getScoreLevel(int marks) {
    string level;

    if (marks >= 80) {
        level = "Excellent";
    } else if (marks >= 60) {
        level = "Very Good";
    } else if (marks >= 50) {
        level = "Fair";
    } else if (marks >= 40) {
        level = "Poor";
    } else {
        level = "Fail";
    }

    return level;
}

int main() {
    int marks;

    cout << "Enter the total marks: ";
    cin >> marks;

    cout << "Mark     Level" <<endl;
    cout << "----------------" <<endl;
    cout <<setw(10) << marks << " " << getScoreLevel(marks) <<endl;

    return 0;
}
