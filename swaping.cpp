#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a = 2, b = 4;

    int temp = a;
    a = b;
    b = temp;

    cout << a << "  " << b << endl;

    return 0;
}