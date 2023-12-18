#include <iostream>
using namespace std;
    int main(){
        int i,j,choice,h;
        char ch;
         do {
        cout << "\nMenu:\n";
        cout << "1. To display rectangle\n";
        cout << "2. To display hollow rectangle\n";
        cout << "3. To display half pyramid\n";
        cout << "4. To display inverted half pyramid\n";
        cout << "5. To display hollow inverted half pyramid\n";
        cout << "6. To display full pyramid\n";
        cout << "7. To display inverted full pyramid\n";
        cout << "8. To display hollow full pyramid\n";
        cout << "9. To display number in rectangle\n";
        cout << "10. To display number in triangle\n";
        cout << "11. To display flipped version of number in triangle\n";
        cout << "12. To display abcde in rectangle\n";
        cout << "13. To display ABCDE in triangle\n";
        cout << "14. To display A-X in rectangle\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                for (i = 0; i < 4; ++i) {
                     for (j = 0; j < 7; ++j) {
                           cout << "* ";}
                     cout <<endl;
                     }
            break;
            case 2:
                for (i = 0; i < 7; ++i) {
                    for (j = 0; j < 8; ++j) {
                          if (i == 0  i == 6) {
                              cout << "* ";
                        }else if (j == 0  j == 7) {
                               cout << "* ";
                        }else {
                               cout << "  ";
                         }}
                    cout << endl;
                    }
            break;
            case 3:
                 for ( i = 1; i <= 6; ++i) {
                         for ( j = 1; j <= i; ++j) {
                                cout << "* ";
                          }
                         cout << endl;
                     }
            break;
            case 4:
                 for (i = 6; i >= 1; --i) {
                          for (j = 1; j <= i; ++j) {
                                  cout << "* ";
                           }
                           cout <<endl;
                     }
            break;
            case 5:
                 for (i = 6; i >= 1; --i) {
                          for (j = 1; j <= i; ++j) {
                              if (j == 1  j == i  i == 6  i == 1) {
                                  cout << "* ";
                             } else {
                                 cout << "  ";
                             }}
                         cout << endl;
                     }
            break;
            case 6:
               for ( i = 1; i <= 6; ++i) {
                         for ( j = 1; j <= 6 - i; ++j) {
                             cout << " ";
                           }
                         for (h = 1; h <= i; ++h) {
                             cout << "* ";
                           }
                   cout << endl;
                   }
            break;
            case 7:
              for ( i = 6; i >= 1; --i) {
                         for (j = 1; j <= 6 - i; ++j) {
                             cout << " ";
                         }
                         for (h = 1; h <= i; ++h) {
                             cout << "* ";
                           }
                  cout << endl;
                 }
             break;
            case 8:
               for ( i = 1; i <= 6; ++i) {
                           for (j = 1; j <= 6 - i; ++j) {
                             cout << " ";
                           }
                         for ( h = 1; h <= i; ++h) {
                               if (h == 1  h == i || i == 6) { cout << "* ";
                              } else {
                                     cout << "  ";
                              } }
                cout << endl;
                }
            break;
            case 9:
                 for (i = 1; i <= 5; ++i) {for ( j = 1; j <= 5; ++j) {
                             cout << j << " ";
                          }
                     cout << endl;
                     }
            break;
            case 10:
                 for (i = 1; i <= 5; ++i) {
                          for (j = 1; j <= i; ++j) {
                               cout << j << " ";
                         }
                     cout << endl;
                      }
            break;
            case 11:
                for (i = 1; i <= 5; ++i) {
                    for (j = 1; j <= 5 - i; ++j) {
                           cout << "  ";
                       }
                    for ( h = i; h >= 1; --h) {
                           cout << h << " ";
                       }
               cout << endl;
                }
            break;
             case 12:
                 for ( i = 1; i <= 5; ++i) {
                      for (ch = 'a'; ch <= 'e'; ++ch) {
                        cout << ch << " ";
                       }
                 cout <<endl;
               }
            break;
            case 13:
                 for (i = 1; i <= 5; ++i) {
                     ch = 'A';
                     for (int j = 1; j <= i; ++j) {
                           cout << ch << " ";
                           ++ch;
                     }
                 cout << endl;
                }
            break;
            case 14:
                 ch = 'A';
                     for ( i = 1; i <= 4; ++i) {
                         for (j = 1; j <= 6; ++j) {
                            cout << ch << " ";
                             ++ch;
                         }
                     cout << endl;
                     }
            break;
            case 0:
                cout << "Exiting program\n";
            break;
            default:
                cout << "Invalid choice\n";
            break;
      }

    } while (choice != 0);

     return 0;
}
