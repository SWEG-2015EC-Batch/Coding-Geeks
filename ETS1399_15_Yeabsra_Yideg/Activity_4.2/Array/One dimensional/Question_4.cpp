#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int first[n];
    int second[n];
    float sum;
    cout<<"Enter first elements \n";
    for(int i = 0;i<n;i++)
    {
 cin>>first[i];
    }
      cout<<"Enter second elements \n";
    for(int i = 0;i<n;i++)
    {
 cin>>second[i];
    }
    cout<<endl;
    cout<<"first"<<"\t"<<"second"<<"\t"<<"sum"<<endl;
    for(int i = 0;i<n;i++)
    {
        sum = first[i]+second[i];
        cout<<first[i]<<"\t"<<second[i]<<"\t"<<sum<<endl;
    }

    return 0;
}
