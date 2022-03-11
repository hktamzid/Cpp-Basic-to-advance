#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int p = 3;
    //int count = 0;
    //while(n)
    //{
        n = n>>p;
        if(n&1==1)
        {
            cout << "True";
        }
        else
        {
            cout << "False";
        }
   //}
    //cout << count;

}