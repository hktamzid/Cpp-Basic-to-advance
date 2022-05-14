#include<bits/stdc++.h>
using namespace std;
int fact(n)
{
    int fact == 1;
    for(int i = 1; i <= n; i++)
    {
        fact = fact*i;
    }
    return fact;
}
int main()
{
    int n;
    cout << "Enter a integer number: ";
    cin >> n;
    cout << "The factorial of "<< n <<"is "<< fact(n);
}