//  Write a function to check whether a given number contains a given digit or not. (TSRS)

#include<stdio.h>

int isDigitContain(int, int);

int main()
{
    int num, dig;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter a digit: ");
    scanf("%d",&dig);
    int res = isDigitContain(num,dig);
    if(res==1)
        printf("%d contains digit %d.",num,dig);
    else
        printf("%d does not contains digit %d.",num,dig);
    return 0;
}

int isDigitContain(int x, int y)
{
    int rem;
    while(x!=0)
    {
        rem=x%10;
        if(rem==y)
            return 1;
        x=x/10;
    }
    return 0;
}