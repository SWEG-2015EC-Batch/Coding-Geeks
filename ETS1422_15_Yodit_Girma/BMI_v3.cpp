#include <iostream>
using namespace std;
int main()
{
float person_Height, person_Weight,person_BMI;
char gender;
int k;
cout<<"enter the number of people you want to calculate for:";
cin>>k;
for(int i=1; i<=k;  i++){
cout<<"enter your gender:";
cin>>gender;
 cout<<"enter your height:";
cin>>person_Height;
cout<<"enter your weight:";
cin>>person_Weight;
person_BMI= (person_Weight) / (person_Height*person_Height);
cout<<"person gender:"<<gender<<endl;
cout<<"person bmi:"<<person_BMI<<endl;

if(gender=='F')
{
if(person_BMI<18.5){
 cout<<"underweight"<<endl;
 }
 else if(person_BMI>18.5 && person_BMI<24)
 {
  cout<<"normal weight"<<endl;
 }
 else if(person_BMI>24 && person_BMI<30)
 {
  cout<<"over weight"<<endl;}
  else if(person_BMI>30) {
cout<<"obesity"; }
}
if(gender=='M')
 {
  if(person_BMI<20.5){
   cout<<"underweight"<<endl;
  }
  else if(person_BMI>20.5 && person_BMI<25)
    {
   cout<<"normal weight"<<endl;
  }
   else if(person_BMI>25 && person_BMI<30)
    {
    cout<<"overweight"<<endl;
   }
    else if(person_BMI>30)
        {
     cout<<"obesity"<<endl;
}
 }
}

 return 0;
}
