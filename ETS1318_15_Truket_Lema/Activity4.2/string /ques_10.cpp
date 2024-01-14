#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char pass[20] = "happy"; 
  char input[20]; 
  cout << "Enter the password: ";
  cin >> input;
  if (strcmp(pass, input) == 0) { 
    cout << "You entered the correct password.\n"; 
  }
  else {
    cout << "You entered the wrong password.\n"; 
  }
  return 0;
}
