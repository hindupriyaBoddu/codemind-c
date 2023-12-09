#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,i;
    scanf("%d",&n);
    
    for(i=1;i<n;i++)
{
    c=a+b;
    if(c==n)
    {
        printf("True");
        break;
    }
    if(c>n)
    {
        printf("False");
        break;
    }
    a=b;
    b=c;
}   
    
}