#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char ch;
    cout << "Enter any letter: ";
    cin >> ch;

    ch = tolower(ch);
    switch (ch)
    {
    case 'a':
        cout << "Vowel";
        break;
    case 'e':
        cout << "Vowel";
        break;
    case 'i':
        cout << "Vowel";
        break;
    case 'o':
        cout << "Vowel";
        break;
    case 'u':
        cout << "Vowel";
        break;
    default:
        cout << "Consonant";    
    }

    return 0;
}