#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter any number: ";
    cin >> n;

    for (int i=2; i<n; i++)
    {
        if(i%n==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
    {
        cout << "This is prime";
    }
    else
    {
        cout << "This is not prime";
    }
    return 0;
}