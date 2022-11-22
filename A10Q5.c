// Write a function to print first N odd natural numbers. (TSRN)

#include<stdio.h>

void printOddNaturalNumbers(int);

int main()
{
    int num;
    printf("Enter value of N: ");
    scanf("%d",&num);
    printOddNaturalNumbers(num);
    return 0;
}

void printOddNaturalNumbers(int x)
{
    int num1=1;
    for(int i=1; i<=x; i++)
    {
        printf("%d\n",num1);
        num1=num1+2;
    }
}