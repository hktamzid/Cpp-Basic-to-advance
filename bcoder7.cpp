#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any integer number: ";
    cin >> n;
    int temp;
    int fact_count = 0;

    for(int i = 1; i*i<=n; i ++)
    {
        if(n%i==0)
        fact_count++;
        cout << i << " ";
        if( n / i != i)
            cout << n / i << " ";
            fact_count++;

    }
    if(fact_count==2)
    {
        cout<< "Prime";
    }
    else
    {
        cout << "Not prime";
    }

    return 0;
}