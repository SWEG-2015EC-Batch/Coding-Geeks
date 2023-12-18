#include <iostream>
using namespace std;
int main()
{
float Height, Weight, BMI;
char gender;
cout<<"enter your height(in meter):";
cin>>Height;
cout<<"enter your weight(in kg):";
cin>>Weight;
BMI= (Weight) / (Height*Height);

//gender

cout << "Enter gender (male,female): ";
cin >> gender;
if (gender == 'M' && gender == 'male') {
cout << "Male." << endl;} else if (gender == 'F' && gender == 'female') 
{cout << "Female." << endl;} else {cout << "Invalid input." << endl;}
cout<<"gender:"<<gender<<endl;

//comment

if (BMI < 18.5) 
{cout << "BMI Level: Underweight" << endl;} 
else if (BMI >= 18.5 && BMI < 25) 
{cout << "BMI Level: Normal Weight" << endl;} 
else if (BMI >= 25 && BMI < 30) 
{cout << "BMI Level: Overweight" << endl;} 
else {cout << "BMI Level: Obesity" << endl;}

 return 0;
}
