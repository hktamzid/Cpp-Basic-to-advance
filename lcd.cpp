#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1,num2,n1,n2,gcd,lcd,rem;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    n1 = num1;
    n2 = num2;

    while(n2!=0)
    {
        rem = n1 % num2;
        n1 = n2;
        n1 = rem;
    }
    gcd = n1;
    cout << "GCD is: " << gcd << endl;

    lcd = num1 * num2 / gcd;
    cout << "LCD is: " << lcd << endl;

    return 0;
}