#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    while(1)
    {
        int num,table;
        cout << "Enter the number that's table you want: ";
        cin >> num;

        cout << "The Table is:"<< endl;
        for(int i=1; i<=10; i++)
        {
            table = num * i;
            cout << num << " + " << i << " = "<< table << endl;
        }

    }
    return 0;

}
