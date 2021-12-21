#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int note, amount;

    cout << "Enter the amount: ";
    cin >> amount;

    note = amount / 500;

    cout << "Number of 500 note is : "<< note << endl;

    return 0;
}