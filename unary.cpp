#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x=5;

    int y = ++x;
    cout << "y value is: " << y << endl;
    cout << "x value is: " << x << endl;

    y = x--;
    cout << "Y value is: " << y << endl;
    cout << "X value is: " << x << endl;

    y = --x;
    cout << "Y value is: " << y << endl;
    cout << "X value is: " << x << endl;

    return 0;
}