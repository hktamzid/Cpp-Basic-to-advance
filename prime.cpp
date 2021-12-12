#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, count;
    cout << "Enter any number: ";
    cin >> n;

    for( int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            count++;
            break;
            //cout << "This is not prime";
        }   
    }
    if(count == 0)
    {
        cout << "This is prime" << endl;
    }
    else
    {
        cout << "This is not prime";
    }
    return 0;
}