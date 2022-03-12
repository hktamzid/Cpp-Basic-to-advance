#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int year;
    int backlogs;
    string branch;
    float percentage;

    cout<<"Enter your academic year: ";
    cin >> year;
    cout << "Enter your backlogs: ";
    cin >> backlogs;
    cout << "Enter your branch: ";
    cin >> branch;
    cout << "Enter your percentage: ";
    cin >> percentage;

    if(year == 3 and backlogs == 0 and (branch == "IT" or branch == "CSE" or branch == "ECE") and percentage>70)
    {
        cout <<"Congratulation, You are selected";
    }
    else
    {
        cout << "Sorry! you are not eligible";
    }

    return 0;
}