#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any integer number: ";
    cin >> n;
    int temp;

    for(int i = 1; i*i<=n; i ++)
    {
        if(n%i==0)
        cout << i << " ";
        if( n / i != i)
            cout << n / i << " ";
    }

    return 0;
}