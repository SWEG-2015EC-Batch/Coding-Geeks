#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cout << "Enter the number of names: ";
  cin >> n;

  string names[n];
  string name;
  cout << "Enter the names: \n";
  for (int i = 0; i < n; i++) {
    cin >> name;
    names[i] = name;
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (names[j] > names[j + 1]) {
        swap(names[j], names[j + 1]);
      }
    }
  }

  cout << "The names in alphabetical order are: \n";
  for (int i = 0; i < n; i++) {
    cout << names[i] << "\n";
  }

  return 0;
}

