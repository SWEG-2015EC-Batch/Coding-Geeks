#include <iostream>
using namespace std;
int main() {
    int test, assignment, quiz, project, finalExam;

  cout << "Enter test score: ";
    cin >> test;
   cout << "Enter assignment score: ";
    cin >> assignment;
    cout << "Enter quiz score: ";
    cin >> quiz;
    cout << "Enter project score: ";
    cin >> project;
    cout << "Enter final exam score: ";
    cin >> finalExam;
    int totalScore = test + assignment + quiz + project + finalExam;
    string scoreLevel;
    if (totalScore >= 80) {
        scoreLevel = "Excellent";
    } else if (totalScore >= 60) {
        scoreLevel = "Very Good";
    } else if (totalScore >= 50) {
        scoreLevel = "Fair";
    } else if (totalScore >= 40) {
        scoreLevel = "Poor";
    } else {
        scoreLevel = "Fail";
    }
    cout << "\nResults:\n";
    cout << "----------------------------------"<<endl;
    cout << "Category       |   Score\n";
    cout << "----------------------------------"<<endl;
    cout << "Test           |   " << test <<endl;
    cout << "Assignment     |   " << assignment <<endl;
    cout << "Quiz           |   " << quiz <<endl;
    cout << "Project        |   " << project  <<endl;
    cout << "Final Exam     |   " << finalExam <<endl;
    cout << "----------------------------------"<<endl;
    cout << "Total Score    |   " << totalScore <<endl;
    cout << "Score Level    |   " << scoreLevel <<endl;
    cout << "----------------------------------"<<endl;

    return 0;
}

