#include<bits/stdc++.h>
using namespace std;
long long N = 10000001;
vector<bool>primes(10000001,true)
vector<int>prefix (10000001,0)
vector Gen_Seive()
{
    primes[0] = primes[1] = false;
    for (int i = 2; i*i < N; i++)
    {
        if(primes[i] == true)
        {
            for(int j = i*i; j <= N; j += i;)
            {
                primes[j] = false;
            }
        }
    }
    for(int i)
}
int main()
{
    Gen_Seive();
    int Q;
    cin >> Q;
    while(Q--)
    {
        long long n;
        cin >> n;
        int cnt = 0;
        cout << prefix [n]<<"\n"

        /*for(int i =2; i<=n; i++)
        {
            if(primes[1] == true)
            cnt++;
        }*/
    }
}