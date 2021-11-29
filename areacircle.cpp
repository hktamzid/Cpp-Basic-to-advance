#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double radius, area;

     cout << "Enter the radius value: ";
     cin >> radius;

    area = 3.1416 * radius * radius;
    cout << "The are of circle is = " << area;
}