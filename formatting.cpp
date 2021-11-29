#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float num1, num2 ;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2 ;

    cout << showpoint;

    float sum = num1 + num2;
    cout << "Summation is: "<< sum <<endl ;
   
    float sub = num1 - num2;
    cout << "Subtraction is: " << sub << endl ;
  
    float mul = num1 * num2;
    cout << "Multiplication is: " << mul << endl ;

    float div = num1 / num2;
    cout << "Division is: " << div << endl ;

    //float mod = num1 % num2;
   // cout << "Reminder is: " <<mod ;

    return 0;
}