#include <iostream>
#include <string>
using namespace std;

int main() {
  string text; 
  cout << "Enter a line of text: ";
  getline(cin, text);
  string upper = text; 
  string lower = text; 
  for (int i = 0; i < upper.length(); i++) {
    upper[i] = toupper(upper[i]);
  }
  for (int i = 0; i < lower.length(); i++) {
    lower[i] = tolower(lower[i]);
  }
  cout << "The text in uppercase is: " << upper << "\n";
  cout << "The text in lowercase is: " << lower << "\n";

  return 0;
}
