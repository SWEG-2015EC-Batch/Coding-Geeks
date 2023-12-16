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
cout<<"person gender:"<<gender<<endl;
if(gender=='F')
{
if(person_BMI<18.5){
 cout<<"underweight";
 }
 else if(person_BMI>18.5 && person_BMI<24)
 {
  cout<<"normal weight";
 }
 else if(person_BMI>24 && person_BMI<30)
 {
  cout<<"over weight";}
  else if(person_BMI>30) {
cout<<"obesity"; }
}
if(gender=='M')
 {
  if(person_BMI<20.5){
   cout<<"underweight";
  }
  else if(person_BMI>20.5 && person_BMI<25)
  {
   cout<<"normal weight";
  }
   else if(person_BMI>25 && person_BMI<30)
   {
    cout<<"overweight";
   }
    else if(person_BMI>30)
    {
     cout<<"obesity";
    }
 }
 return 0;
}

