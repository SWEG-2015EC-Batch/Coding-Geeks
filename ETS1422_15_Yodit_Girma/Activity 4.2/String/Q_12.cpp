#include <iostream>
using namespace std;

int get_score(char student[], char correct[], int n) {
    int score = 0;
    for (int i = 0; i < n; i++) {
        if (student[i] == correct[i]) {
            score++;
        }
    }
    return score;
}
void print_answers(char student[], char correct[], int n) {
    cout << "Student answer: ";
    for (int i = 0; i < n; i++) {
        cout << student[i] << " ";
    }
    cout << endl;
    cout << "Correct answer: ";
    for (int i = 0; i < n; i++) {
        cout << correct[i] << " ";
    }
    cout << endl;
}

int main() {
    const int N = 10;
    char correct[N] = {'C', 'B', 'A', 'D', 'C', 'A', 'B', 'D', 'A', 'C'};
    char student[N];
    int score;

    cout << "Enter the student answer for the test (10 questions, A, B, C, or D):" << endl;
    for (int i = 0; i < N; i++) {
        cin >> student[i];
    }
    score = get_score(student, correct, N);
    cout << "The test score is: " << score << " out of " << N << endl;
    print_answers(student, correct, N);

    return 0;
}
