#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int money;
    cout << "Enter your pocket money: ";
    cin >> money;
    if(money>1000)
    {
        cout << "Bunk the college, party and Movie";
    }
    else if(money>500)
    {
        cout << "Bunk the college and party";
    }
    else if(money>100)
    {
        cout << "Bunk the college;
    }
    else
    {
        cout << "Go to college";
    }

    return 0;
}