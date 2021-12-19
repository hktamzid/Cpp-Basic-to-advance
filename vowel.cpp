#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    ch = tolower(ch);

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << "Vowel";
    }
    else
    {
        cout << "Consonant";
    }

    return 0;
}