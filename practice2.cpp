#include<iostream>
using namespace std;

int main()
{
    int N;
    int count = 0;
    int sum = 0;
    cin >> N;
    for(int i = 1; i <= N; i++)
    {
        if (N%i==0)
        {
            count++;
            sum = sum + count;
        }
    }
    cout << sum;

    return 0;
}