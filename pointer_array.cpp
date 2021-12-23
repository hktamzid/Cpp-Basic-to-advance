#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int arr[] = {10,20,30};
    //cout << &arr[0] << endl;
    //cout << &arr[1] << endl;
    //cout << &arr[2] << endl;


    int *ptr = arr;
    for(int i=0; i<3; i++)
    {
        cout << *(arr+i) << endl;
        //ptr++;
    }

    return 0;
}