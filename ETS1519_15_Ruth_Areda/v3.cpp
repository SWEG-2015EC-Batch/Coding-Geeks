#include <iostream>
using namespace std;
int main()
{
	float H ,M,BMI ; 
	char Gender;
	int np;
	cout<<"enter number of people";
	cin>>np;
	for(int i=1;i<=np;i++){
	
		cout<< "please enter the G : " ;
		cin>>Gender;
		cout<< "please enter the H : " ;
		cin>>H;
			cout<< "please enter MASS : ";
		cin>>M;
		BMI=M/(H*H) ;
		cout<<"BMI"<<BMI;
	
		
		 if(Gender=='f'){
		 
		 	if(BMI<18.5){
			 cout<<"UW"<<endl;
			 }
		 	else if(BMI>=18.5&& BMI<24){
			 cout<<"NW"<<endl;
			}
			else if(BMI>=24&&BMI<30){
			 cout<<"ow"<<endl;
			 }
		 	else if(BMI>30){
			 cout<<"OBESITY"<<endl;
			 }
	}
		  if(Gender=='m'){
		 	if(BMI<20){
			 cout<<"UW"<<endl;
			 }
		 	else if(BMI>=20&&BMI<=25){
			 cout<<"NW"<<endl;
			}
			else if(BMI>=25&&BMI<30){
			 cout<<"ow"<<endl;
			 }
		 	else if(BMI>30){
			 cout<<"OBESITY"<<endl;
			 }
		 }
	}
		return 0;
}
