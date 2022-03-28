#include<iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    string arr[9]= {"one","two","three","four","five","six","seven","eight","nine"};
    for(int i = m; i <= n; i++)
    {
        if(i >= 1 && i <= 9)
        {
            cout << arr[i-1] << endl;
        }
        else 
        {
            if(i%2==0)
            {
                cout << "even" << endl;
            }
            else {
            {
                cout << "odd" << endl;
            }
            }
        }
    }
    return 0;
}