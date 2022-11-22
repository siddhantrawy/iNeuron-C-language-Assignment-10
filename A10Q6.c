// Write a function to calculate the factorial of a number. (TSRS)

#include<stdio.h>

int factorial(int);
int main()
{
    int num;
    printf("Enter a number for factorial calculation: ");
    scanf("%d",&num);
    int res = factorial(num);
    printf("Factorial of %d is %d.",num,res);
    return 0;
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