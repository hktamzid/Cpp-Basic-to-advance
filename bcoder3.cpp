#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int status;
    int bfee;
    cout << "Press 1 if you are a become coder student or press 0";
    cin >> status;

    if(status==1)
    {
        cout << "You got 5% discount on fee!";
        cout << "You have to pay: " << (30000%5);
    }

    return 0;
}