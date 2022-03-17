#include<iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter any number: ";
    cin >> n;
    for (int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            cout << "Not Prime";
        }
        else
        {
            cout << "This is prime";
        }
    }
    return 0;
}