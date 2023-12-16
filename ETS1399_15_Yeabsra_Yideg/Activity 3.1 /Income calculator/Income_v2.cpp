#include<iostream>

using namespace std;

int main()
{
   double Gross_salary,Workedhour,Incometax,Overtimehour,Bonuspayment=0,netsalary;
     cout<<"Enter gross salary "<<endl;
     cin>>Gross_salary;
     cout<<"Enter worked hour "<<endl;
     cin>>Workedhour;
     if(Gross_salary>0 && Gross_salary<200){
        Incometax==0;
     }else if(Gross_salary>=200 && Gross_salary<600){
        Incometax==0.1;
     }else if(Gross_salary>=600 && Gross_salary<1200){
        Incometax==0.15;
     }else if(Gross_salary>=1200 && Gross_salary<2000){
        Incometax==0.2;
     }else if(Gross_salary>=2000 && Gross_salary<3500){
        Incometax==0.25;
     }else if(Gross_salary>=3500){
        Incometax==0.3;
     }else {
        cout<<"error"<<endl;
     }

        netsalary=Gross_salary-(Gross_salary*0.07)-(Gross_salary*Incometax);
        cout<<"the net salary is "<< netsalary<<endl;

    if(Workedhour>40) {
    cout<<"Enter the overtime bonus hour"<<endl;
    cin>>Overtimehour;
    Bonuspayment=(Workedhour-40)*Overtimehour;
    }
    netsalary+=Bonuspayment;
    cout<<"The net salary is "<< netsalary<<endl;

     return 0;
}
