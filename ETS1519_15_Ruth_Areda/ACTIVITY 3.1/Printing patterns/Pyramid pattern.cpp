//full pyramid
#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of rows for the full pyramid: ";
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j < n; ++j)
		 {
            std::cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
//half inverted pyramid
#include<iostream>
using namespace std;
int main()
{
	int i,j,n ;
	cout <<"enter the number for the half inverted pyramid";
	cin>>n;
	for(int i=6;i>=1;i--)
	{
		for( j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
//hollow full pyramid
#include <iostream>
using namespace std;
int main() {
    int rows;
    cout << "Enter the number of rows for the hollow pyramid: ";
    cin >> rows;
    for (int i = 1; i <= rows; ++i) {
        for (int j = i; j < rows; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            if (k == 1 || k == 2 * i - 1 || i == rows) {
                cout << "*";
            } else {
                
            cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}

//inverted full pyramid
#include <iostream>
using namespace std;
int main() {
    int rows;
    cout << "Enter the number of rows for the inverted pyramid: ";
    cin >> rows;
    for (int i = rows; i >= 1; --i) {
        for (int j = 0; j < rows - i; ++j) {
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
    cout <<endl;
    }

    return 0;
}
//



