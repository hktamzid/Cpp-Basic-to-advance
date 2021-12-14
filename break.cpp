#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i;
    for(i=1; i<=100; i+=2)
    {
        if(i==10)
        {
            break;
        }
        cout << i << endl;
    }
    return 0;
}
