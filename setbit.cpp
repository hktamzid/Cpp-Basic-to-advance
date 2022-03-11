#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int count = 0;
    while(n)
    {
        if(n&1==1)
        {
            count++;
        }
        n = n>>1;
    }
    cout << count;

}