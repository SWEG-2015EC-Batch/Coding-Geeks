#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of students "<<endl;
    cin>>n;
    double mark[n];
    string level[n];
    for(int i=0; i<n; i++)
    {
        cout << "Enter the total mark of student "<< i+1 <<": "<< endl;
        cin >> mark[i];
    if ( mark[i] >= 80)
    {
        level[i] = "Excellent";
    }
    else if (mark[i] >= 60)
    {
        level[i] = "Very Good";
    }
    else if (mark[i] >= 50)
    {
        level[i] = "Fair";
    }
    else if (mark[i] >= 40)
    {
        level[i] = "Poor";
    }
    else
    {
        level[i] = "Fail";
    }
    }

    cout << "The mark and the score level of the students are: " << endl;
    cout << "Mark]\tLevel" << endl;
    for(int i=0; i<n; i++){
    cout << mark[i] << "\t" << level[i] << endl;
    }

    return 0;
}
