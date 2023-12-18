#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows for the rectangular pattern: ";
    cin >> rows;
    cout << "Enter the number of columns for the rectangular pattern: ";
    cin >> cols;

    char letter = 'A';

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << letter << " ";
            letter++;
            if (letter > 'Z') {
                letter = 'A';
            }
        }
        cout << endl;
    }
//half
    #include<iostream>

using namespace std;
int main(){
    char i, j, rows;
    bool stop = false;
    do{
    cout << "Enter an Alpha bet or a upto z latter of rows for the half pyramid: ";
    cin >> rows;
    
    for(i ='a'; i <= rows; i++){
        for(j = 'a'; j <= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<"Entet 0 to exit Or enter 1 to countinue: ";
    cin>>stop;
    }while(stop != 0);
    
    return 0;
}
    // abc pattern
    #include <iostream>
using namespace std;

int main() {
    char i, j;
    
    bool stop = false;
    
    do{
    cout << "An Alphabets of Pattern is look like: \n\n";

    for ( i = 'a'; i <= 'e'; i++) {
        for ( j = 'a'; j <= 'e'; j++) {
            cout <<j<< " ";
        }
         
        cout << endl;
    }
    cout<<"\nEnter 0 to exit or Enter 1 to continue: ";
    cin>>stop;
    }while(stop != 0);

    return 0; 
}
    
    return 0;
}




