#include <iostream>
using namespace std;
int main()
 {
   int operand1,operand2,sum,difference,product,quotient,remainder;
   char operation;
   do{
   cout<<" Enter the first number (0 to end) =  "<<endl;
   cin>>operand1;
   cout<<" Enter the operator = "<<endl;
   cin>>operation;
   cout<<" Enter the second number (0 to end) = "<<endl;
   cin>>operand2;
   switch(operation){
   case '+':
     sum = operand1 + operand2;
     cout<<" Sum = "<<sum<<endl;
     break;
    case '-':
      difference = operand1 - operand2;
      cout<<" Difference = "<<difference<<endl;
      break;
    case '*':
      product = operand1 * operand2;
      cout<<" Product = "<<product<<endl;
      break;
    case '/':
      quotient = operand1 / operand2;
      cout<<" Quotient = "<<quotient<<endl;
      break;
    case '%':
      remainder = operand1 % operand2;
      cout<<" Remainder ="<<remainder<<endl;
      break;
      default: cout<<" Unknown operator: ";
      break;
    }
 }while(operand1&&operand2!=0);
   return 0;
 }
