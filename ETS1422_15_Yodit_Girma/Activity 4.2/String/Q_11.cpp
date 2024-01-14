#include <iostream>
#include <string>
using namespace std;

int main() {
  string first, middle, last;
  cout << "Enter your first name: ";
  cin >> first;
  cout << "Enter your middle name: ";
  cin >> middle;
  cout << "Enter your last name: ";
  cin >> last;
  string initials = " ";
  initials += first[0];
  initials += middle[0];
  initials += last[0];

  cout << "Your initials are: " <<initials << "\n";

  return 0; 
}
