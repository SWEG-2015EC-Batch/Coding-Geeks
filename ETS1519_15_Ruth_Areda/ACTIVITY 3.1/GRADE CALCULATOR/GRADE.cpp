#include <iostream>
using namespace std;
int main(){
	double mark;
	cout<<"enter your mark :";
	cin>>mark;
	
	  if (mark >= 90) {
        cout << "Your grade is: A+" << endl;
    } else if (mark >= 80) {
        cout << "Your grade is: A" << endl;
    } else if (mark >= 75) {
        cout << "Your grade is: B+" << endl;
    } else if (mark >= 60) {
        cout << "Your grade is: B" << endl;
    } else if (mark >= 55) {
        cout << "Your grade is: C+" << endl;
    } else if (mark >= 45) {
        cout << "Your grade is: C" << endl;
    } else if (mark >= 30) {
        cout << "Your grade is: D" << endl;
    } else {
        cout << "Your grade is: F" << endl;
    }

    return 0;
}

