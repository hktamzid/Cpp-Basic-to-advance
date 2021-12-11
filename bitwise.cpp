#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    int a=32, b=12,c;

    c = a & b;
    cout << "C value is: "<< c <<endl;

    c = a | b;
    cout << "C value is: "<< c <<endl;

    c = a ^ b;
    cout << "C value is: "<< c <<endl;

    //c = a ~ 2;
    //cout << "C value is: "<< c <<endl;

    c = b << 2; 
    cout << "C value is: "<< c <<endl;

    c = a >> 2;
    cout << "C value is: "<< c <<endl;

    getch();
    return 0;
}