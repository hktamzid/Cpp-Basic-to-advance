#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double width, height, area;

    cout << "Enter width value: ";
    cin >> width;

    cout << "Enter height value: ";
    cin >> height;

    area = width * height;
    cout << "Area of rectangle is =" << area;

    return 0;
}