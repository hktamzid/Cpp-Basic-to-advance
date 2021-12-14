#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b;
    cout << "Enter two integer numbers: ";
    cin >> a >> b ;

    if (a>b)
    {
        cout <<"Biggest number is: "<< a <<endl;
    }
    else
    {
        cout << "Biggest number is: "<< b <<endl;
    }
    
    return 0;
}