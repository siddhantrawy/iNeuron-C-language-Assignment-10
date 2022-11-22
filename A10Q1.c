// Write a function to calculate the area of a circle. (TSRS)

#include<stdio.h>

float area(float);
int main()
{
    float rad, res;
    printf("Enter radius of a circle: ");
    scanf("%f",&rad);
    res=area(rad);
    printf("Area of the circle whose radius %0.2f is %0.2f",rad,res);
    return 0;
}

float area(float x)
{
    float area, PI=3.14;
    area=PI*x*x;
    return area;
}