#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i;
    for(i=1; i<=20; i+=2)
    {
        if(i==10)
        {
            continue;
        }
        cout << i << endl;
    }
    getch();
    return 0;
}
