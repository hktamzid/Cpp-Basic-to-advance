#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int ball = 15;
    //int Ashok, Tevit;
    int i,j;
    for(i = 1; i <=15; i = i+2)
    {
        cout << "Ashok got balls = " << i << endl;
    }
    for(j = 0; j <= 15; j = j+2)
    {
        cout << "Tevit got balls = " << j <<endl;
    }
    if(i>j)
    {
        cout << "Ashok won the game";
    }
    else if (i==j)
    {
        cout << "Match Drawn";
    }
    else
    {
        cout << "Tevit Won the game";
    }
    

    return 0;
}