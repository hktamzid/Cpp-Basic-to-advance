#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int mark;
    cout << "Enter your mark: ";
    cin >> mark;

    if(mark>100)
    {
        cout << "Invalid mark";
    }
    if(mark>32)
    {
        if(mark>=80)
        {
            cout << "A+ grade mark";
        }
        else if(mark>=70)
        {
            cout << "A grade mark";
        }
        else if(mark>=60)
        {
            cout << "B grade mark";
        }
        else if(mark>=50)
        {
            cout << "C grade mark";
        }
        else if(mark>=40)
        {
            cout << "D mark";
        }
        else if(mark>=33)
        {
            cout << "E grade mark";
        }
    }
    else
    {
        cout << "Fail mark";
    }
    
    return 0;
}