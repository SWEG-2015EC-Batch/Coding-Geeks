#include <iostream>
using namespace std;
int main() {
    int numPeople;
    cout << "Enter the number of people: ";
    cin >> numPeople;

    bool friendships[numPeople][numPeople];
    for (int i = 0; i < numPeople; i++) {
        for (int j = 0; j < numPeople; j++) {
            if (i == j) {
                friendships[i][j] = false;
            } else {
                cout << "Is person " << i+1 << " friends with person " << j+1 << "? (1 for yes, 0 for no): ";
                cin >> friendships[i][j];
            }
        }
    }

    cout << endl << "Friendship Table:" << endl;
    cout << "   ";
    for (int i = 1; i <= numPeople; i++) {
        cout << " " << i << " ";
    }
    cout << endl;
    for (int i = 0; i < numPeople; i++) {
        cout << " " << i+1 << " ";
        for (int j = 0; j < numPeople; j++) {
            if (friendships[i][j]) {
                cout << " * ";
            } else {
                cout << "   ";
            }
        }
        cout << endl;
    }

    int numPairs = 0;
    for (int i = 0; i < numPeople; i++) {
        for (int j = i+1; j < numPeople; j++) {
            if (friendships[i][j]&&friendships[j][i]) 
   {
                numPairs++;
            }
        }
    }

    cout << "There are " << numPairs << " pairs of friends." << endl;

    return 0;
}


