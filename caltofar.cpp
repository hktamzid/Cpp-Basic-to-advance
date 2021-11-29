#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float far, cel;

    cout << "Enter fahrenheit temparature: ";
    cin >> far;

    cel = (far-32)/1.8;
    cout << "The celcious temparature is = " << cel;
}