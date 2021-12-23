#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int a[2][2],i,j;
    printf("Enter the input 2*2 matrix: \n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        scanf("%d\t",&a[i][j]);
    }
    printf("\nDisplay the matrix value: ");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        printf("%d\t",a[i][j]);
    }
    printf("\nThis is a 2*2 matrix");

    return 0;
}