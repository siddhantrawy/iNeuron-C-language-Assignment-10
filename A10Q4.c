// Write a function to print first N natural numbers (TSRN)

#include<stdio.h>

void printNaturalNumbers(int);
int main()
{
    int num;
    printf("Enter value of N : ");
    scanf("%d",&num);
    printNaturalNumbers(num);
    return 0;

}

void printNaturalNumbers(int x)
{
    for(int i=1; i<=x; i++)
    {
        printf("%d\n",i);
    }
}