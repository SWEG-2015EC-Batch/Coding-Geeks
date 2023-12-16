#include <iostream>
using namespace std;
int main()
{
float person_Height, person_Weight, person_BMI;
char gender;
cout<<"enter your gender:";
cin>>gender;
 cout<<"enter your height:";
cin>>person_Height;
cout<<"enter your weight:";
cin>>person_Weight;
person_BMI= (person_Weight) / (person_Height*person_Height);
cout<<"persin gender:"<<gender<<endl;
cout<<"your person_BMI is:"<<person_BMI;
 return 0;
}
