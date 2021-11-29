#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float far, cel;

    cout << "Enter celcious temparature: ";
    cin >> cel;

    far = (1.8 * cel) + 32;
    cout << "The Fahrenheit temparature is = " << far;
}