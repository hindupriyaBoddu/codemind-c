#include<stdio.h>
int main()
{
    float r,volume;
    scanf("%f",&r);
    volume=(4.0/3.0)*3.14*(r*r*r);
    printf("%.2f",volume);
}