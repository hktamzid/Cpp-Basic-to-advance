#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x, y;

    cout << "Enter x value: ";
    cin >> x;

    cout << "Enter y value: ";
    cin >> y;

    x+=y;
    cout << "The value of x is =" << x << endl;
    x-=y;
    cout << "The value of x is =" << x << endl;
    x*=y;
    cout << "The value of x is =" << x << endl;
    x/=y;
    cout << "The value of x is =" << x << endl;

    return 0;
}