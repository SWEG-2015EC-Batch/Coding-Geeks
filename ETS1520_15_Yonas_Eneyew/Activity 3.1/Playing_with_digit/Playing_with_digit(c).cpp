#include <iostream>

using namespace std;

int main()
{

   int sum = 0;
int num;
cout<<"enter any number:";
    cin>>num;
while(num>0)
{
    sum += num%10;
    num /= 10;

}
cout<<sum;
return 0;
}
