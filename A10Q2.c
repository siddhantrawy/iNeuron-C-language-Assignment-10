// Write a function to calculate simple interest. (TSRS)

#include<stdio.h>

float simpleInterest(int, float, float);
int main()
{
    float r, t;
    int p;
    printf("Enter principal amount: \n");
    scanf("%d",&p);
    printf("Enter rate of interest: \n");
    scanf("%f",&r);
    printf("Enter time span: \n");
    scanf("%f",&t);
    float res = simpleInterest(p, r, t);
    printf("Simple Interest is %0.2f",res);
    return 0;
}

float simpleInterest(int x, float y, float z)
{
    float si = x*y*z/100;
    return si;
}