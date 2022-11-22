//  Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)

#include<stdio.h>

void primeFactor(int);

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Prime factors of %d are - ",num);
    primeFactor(num);
    return 0;
}

void primeFactor(int x)
{
    for(int i=2; x>1; i++)
    {
        while(x%i==0)
        {
            if(x%i==0)
                printf("%d ",i);
            x=x/i;
        }
    }
}

