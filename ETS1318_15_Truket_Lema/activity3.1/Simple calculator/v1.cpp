#include <iostream>
using namespace std;
int main()
{
    float a,b,c;
    char d;
    do{
        cout<<"enter the first number:";
        cin>>a;

        cout<<"enter the operation(+,-,*,/) or 0 to exit:";
        cin>>d;

            if (d== '0'){
                cout<<"calculater terminated"<<endl;
                break;
            }
        cout<<"enter the second number:";
        cin>>b;
        switch(d){
    case'+':
        c=a+b;
        cout<<"c:"<<c<<endl;
        break;
    case'-':
        c=a-b;
        cout<<"c:"<<c<<endl;
        break;
    case'*':
        c=a*b;
        cout<<"c:"<<c<<endl;
        break;
    case'/':
        c=a/b;
        if(b!=0){
            cout<<"c:"<<c;}
            else { cout<<"undefined:"<<endl;}
            break;
    default:
        cout<<"invalid operator"<<endl;
}


    }while(d!= '0'); // infinite loop
    return 0;
        }
