#include <stdio.h> 
#include<conio.h>
using namespace std;
  
int fact(int n)  
{  
    if (n==0)  
    {  
        return 0;  
    }  
    else if ( n == 1)  
    {  
        return 1;  
    }  
    else   
    {  
        return n*fact(n-1);  
    }  
}
int main()  
{  
    int n,f;  
    printf("Enter the number whose factorial you want to calculate?");  
    scanf("%d",&n);  
    f = fact(n);  
    printf("factorial = %d",f);  
}