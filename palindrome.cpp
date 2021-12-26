#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int num, sum =0, temp, rem;
    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while(temp!=0)
    {
        rem = temp % 10;
        sum = sum * 10 + rem ;
        temp = temp / 10;
    }
    //cout << "Reverse of digit : " << sum << endl;

    if (num == sum)
    {
        cout << "This is palindrome";
    }
    else
    {
        cout << "Not palindrome";
    }

    return 0;
}