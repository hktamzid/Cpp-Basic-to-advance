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
        sum = sum + rem;
        temp = temp / 10;
    }
    cout << "Sum is: " << sum << endl;
    }
    return 0;
}