#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    cout << a << endl;
    cout << ptr << endl;
    cout << &a << endl;
    cout << *ptr << endl;

    *ptr = 20;
    cout << a << endl;

    ptr ++;
    cout << ptr << endl;

    return 0;
}