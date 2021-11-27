#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1 =20, num2 = 10 ;

    int sum = num1 + num2;
    cout << "Summation is: "<< sum <<endl ;
   
    int sub = num1 - num2;
    cout << "Subtraction is: " <<sub << endl ;
  
    int mul = num1 * num2;
    cout << "Multiplication is: " <<mul << endl ;

    int div = num1 / num2;
    cout << "Division is: " << div << endl ;

    int mod = num1 % num2;
    cout << "Reminder is: " <<mod ;

    return 0;
}