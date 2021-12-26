#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    while(1){
    int sum =0, temp, num, rem;
    cout << "Enter any positive number: ";
    cin >> num;
    temp = num;

    while(temp!=0)
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }
    if(num == sum)
    {
        cout << "This is Armstrong"<< endl;
    }
    else
    {
        cout << "Not Armstrong" << endl;;
    }
    }
    return 0;
}