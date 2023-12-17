#include <iostream>

using namespace std;

int main()
{
   int count = 0;
int num;
cout<<"enter any number:";
    cin>>num;
while(num>0)
{
  count++;
    num = num/10;
}
cout<<count<<endl;
return 0;
}
