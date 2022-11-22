// Write a function to calculate the number of arrangements one can make from n items and r selected at a time. (TSRS)


#include<stdio.h>

int arrangements(int, int);
int factorial(int);

int main()
{
    int n, r;
    printf("Enter value of n = ");
    scanf("%d",&n);
    printf("Enter value of r = ");
    scanf("%d",&r);
    int res = arrangements(n,r);
    printf("Number of arrangements one can make from %d items and %d selected at a time = %d",n,r,res);
    return 0;
}

int arrangements(int x, int y)
{
    int arrangement = factorial(x)/factorial(x-y);
    return arrangement;
}

int factorial(int x)
{
    int fact=1;
    for(int i=1; i<=x; i++)
    {
        fact = fact*i;
    }
    return fact;  
}