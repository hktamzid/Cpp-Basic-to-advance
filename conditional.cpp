#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1=20;
    int num2=30;
    int max;

    max = (num1>num2) ? num1 : num2;
    cout << max <<" is max number";

    getch();
    return 0;
}