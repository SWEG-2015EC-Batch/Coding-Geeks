#include <iostream>
#include <string>
using namespace std;
int main() {
    const int NUM_QUESTIONS = 10;
    string correctAnswers = "ABCDABCDAB";  
    string studentAnswers;
    cout << "Enter your answers for the 10 questions (use uppercase letters A, B, C, or D):\n";
    cin >> studentAnswers;
    if (studentAnswers.length() != NUM_QUESTIONS) {
        cerr << "Error: Invalid number of answers entered.\n";
        return 1;  
    }
    int score = 0;
    string markedAnswers;
    for (int i = 0; i < NUM_QUESTIONS; ++i) {
        if (studentAnswers[i] == correctAnswers[i]) {
            score++;
            markedAnswers += '+';
        } else {
            markedAnswers += '-';
        }
    }

    cout << "\nTest Score: " << score << " out of " << NUM_QUESTIONS << "\n";
    cout << "Marked Answers: " << markedAnswers << "\n";

    return 0;
}

