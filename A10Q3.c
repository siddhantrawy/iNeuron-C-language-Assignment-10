// Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)

#include<stdio.h>

int oddEven(int);
int main()
{
    int num, res;
    printf("Enter a number: ");
    scanf("%d",&num);
    res = oddEven(num);
    if(res==1)
        printf("%d is an even number.",num);
    else
        printf("%d is an odd number",num);
    return 0;
}

int oddEven(int x)
{
    if(x%2==0)
        return 1;
    else
        return 0;
}