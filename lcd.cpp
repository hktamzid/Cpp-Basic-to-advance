#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num1,num2,n1,n2,gcd,lcm,rem;
    cout << "Enter two numbers: " << endl;
    cin >> num1 >> num2;

    n1 = num1;
    n2 = num2;

    while(n2!=0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    gcd = n1;
    cout << "GCD is: " << gcd << endl;

    lcm = num1 * num2 / gcd;
    cout << "LCD is: " << lcm << endl;

    return 0;
}