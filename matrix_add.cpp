#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i,j;
    int a[2][3], b[2][3], c[2][3];
    printf("Read the input for matrix a: \n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        
            scanf("%d\t",&a[i][j]);
        
    }
    printf("Read the input for matrix b: \n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        
            scanf("%d\t",&b[i][j]);
        
    }
    
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        
            c[i][j] = a[i][j] + b[i][j];
        
    }
    printf("The sum of 2 matrix: \n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        
            printf("%d\t",c[i][j]);
        printf("\n");
        
    }

    return 0;
}