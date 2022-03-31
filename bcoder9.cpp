#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
int main()
{
    cout << "Enter any Number: ";
    int n,F;
    cin >> n;
    F = fact(n);
    cout << "The Factorial of "<< n << " is " << F;
}