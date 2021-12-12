#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n,fact = 1;
    cout << "Enter any number: ";
    cin >> n;

    for( int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial is: " << fact<< endl;

    return 0;
}