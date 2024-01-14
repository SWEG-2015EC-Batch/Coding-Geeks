#include <iostream>
#include <string>
using namespace std;
int main() {
    string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    const int ASCII_SIZE = 128;
    int charFrequency[ASCII_SIZE] = {0};

    for (char ch : inputString) {
        if (isalnum(ch)) {
            charFrequency[static_cast<unsigned char>(ch)]++;
        }
    }
    char maxChar = '\0', minChar = '\0';
    int maxFrequency = 0, minFrequency = INT_MAX;

    for (int i = 0; i < ASCII_SIZE; ++i) {
        if (charFrequency[i] > maxFrequency) {
            maxChar = static_cast<char>(i);
            maxFrequency = charFrequency[i];
        }

        if (charFrequency[i] < minFrequency && charFrequency[i] > 0) {
            minChar = static_cast<char>(i);
            minFrequency = charFrequency[i];
        }
    }
    cout << "\nCharacter Frequencies:\n";
    for (int i = 0; i < ASCII_SIZE; ++i) {
        if (charFrequency[i] > 0) {
            cout << "'" << static_cast<char>(i) << "': " << charFrequency[i] << " occurrences\n";
        }
    }

    cout << "\nCharacter with the Largest Frequency: '" << maxChar << "' (occurs " << maxFrequency << " times)\n";
    cout << "Character with the Smallest Frequency: '" << minChar << "' (occurs " << minFrequency << " times)\n";


    return 0;
}

