#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;
    cout << "Enter a number: ";
    cin >> n;
    int p = 3;
        n = n>>p;
        if(n&1==1)
        {
            cout << "True";
        }
        else
        {
            cout << "False";
        }
}