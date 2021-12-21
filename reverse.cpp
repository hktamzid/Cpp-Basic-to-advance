#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int sum = 0, temp, num, rem;
    cout << "Enter a number: ";
    cin >> num;
    temp = num;

    while(temp!=0)
    {
        rem = temp % 10;  
        sum = sum * 10 + rem;
        temp = temp / 10;
    }
    cout << "The reverse of digit is: "<< sum << endl;

    return 0;
}       