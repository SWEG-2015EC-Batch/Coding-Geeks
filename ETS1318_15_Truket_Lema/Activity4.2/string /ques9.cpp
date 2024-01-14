#include <iostream>
#include <cstring>
using namespace std;

int main() {
  char tv1[20] = "Breaking Bad";
  char tv2[20];
  strcpy(tv2, "Behind her eyes");
  cout << "My two favorite television programs are: \n";
  cout << tv1 << "\n";
  cout << tv2 << "\n";
  return 0;
}
