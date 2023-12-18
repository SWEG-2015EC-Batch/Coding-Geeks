#include <iostream>

using namespace std;

int main()
{
    int reverse, temp , numReverse;
int num;
reverse = 0;
int sum = 0;
 cout<<"enter any number:";
    cin>>num;
while(num>0)
{
    temp = num%10;
    numReverse = (reverse*10)+temp;
    num = num/10;
cout<<numReverse;
}
return 0;
}
