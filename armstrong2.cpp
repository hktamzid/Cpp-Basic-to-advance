#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int sum =0, temp, initnum, rem, finalnum, i;
    cout << "Enter initial number: ";
    cin >> initnum;

    cout << "Enter final number: ";
    cin >> finalnum;

    for(i = initnum; i<=finalnum; i++)
    {
    temp = i;

    while(temp!=0)
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }
    if(sum == i)
    {
        cout << i << endl;
    }
    sum = 0;
    }
    return 0;
}