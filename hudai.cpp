#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    while(1)
    {
        int n;
        cout << "Enter a number: ";
        cin >> n;

        if(n%2==0)
        {
            cout << "Even" << endl;
        }
        else
        {
            cout << "Odd" << endl;
        }
    }
    return 0;
}