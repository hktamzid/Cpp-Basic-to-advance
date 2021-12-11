#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i;
    for(i=1; i<=100; i+=3)
    {
        if(i==10)
        {
            continue;
        }
        if(i>13)
        {
            break;
        }
        cout << i << endl;
    }
   // getch();
    return 0;
}
