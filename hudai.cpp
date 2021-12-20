#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n%2==0)
    {
        cout << "Event";
    }
    else
    cout << "Odd";
    return 0;
}