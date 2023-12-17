#include<iostream>

using namespace std;

int main()
{
   double Gross_salary,Workedhour,Incometax,Overtimehour,Bonuspayment=0,netsalary;
     cout<<"Enter gross salary "<<endl;
     cin>>Gross_salary;
     cout<<"Enter worked hour "<<endl;
     cin>>Workedhour;
     cout<<"Enter income tax rate "<<endl;
     cin>>Incometax;

        netsalary=Gross_salary-(Gross_salary*0.07)-(Gross_salary*Incometax);
        cout<<"The net salary is "<< netsalary<<endl;

    if(Workedhour>40) {
    cout<<"Enter the overtime bonus hour "<<endl;
    cin>>Overtimehour;
    Bonuspayment=(Workedhour-40)*Overtimehour;
    }
    netsalary+=Bonuspayment;
    cout<<"The net salary is "<< netsalary<<endl;

     return 0;
}
