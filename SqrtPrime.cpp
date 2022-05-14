#include<bits/stdc++.h>
using namespace std;
bool Is_Prime(int num)
{
    //logic check
    //sqrt
    if(num <= 1)return false;
    for( int i = 2; i*i <= num; i++)
    if(num % i == 0)return false{
        return true;
    }
}
int main()
{
    int Q;
    cin >> Q;
    while (Q--)
    {
        int N;
        cin >> N;
        for (int = 2; i <= N; i++)
        {
            if(Is_Prime(i))    //sqrt
            {
                cout << i << " ";
            }
        }

    }
    
   // return 0;
}