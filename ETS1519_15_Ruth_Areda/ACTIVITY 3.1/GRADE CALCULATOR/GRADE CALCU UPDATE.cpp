#include <iostream>
using namespace std;
int main(){
	double quiz,test,project,assignment,finalexam,totalmark;
	cout<<"Enter your quiz mark 5% :";
	cin>>quiz;
	cout<<"Enter your test mark 15% :";
	cin>>test;
	cout<<"Enter your project mark 20% :";
	cin>>project;
	cout<<"Enter your quiz mark 10% :";
	cin>>assignment;
	cout<<"Enter your quiz mark 50% :";
	cin>>finalexam;
	 totalmark=quiz+test+project+assignment+finalexam;
	
	  if (totalmark >= 90) {
        cout << "Your grade is: A+" << endl;
    } else if (totalmark >= 80) {
        cout << "Your grade is: A" << endl;
    } else if (totalmark >= 75) {
        cout << "Your grade is: B+" << endl;
    } else if (totalmark >= 60) {
        cout << "Your grade is: B" << endl;
    } else if (totalmark >= 55) {
        cout << "Your grade is: C+" << endl;
    } else if (totalmark >= 45) {
        cout << "Your grade is: C" << endl;
    } else if (totalmark >= 30) {
        cout << "Your grade is: D" << endl;
    } else {
        cout << "Your grade is: F" << endl;
    }

    return 0;
}

