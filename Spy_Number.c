#include<stdio.h>
int main()
{
    int n,id,sum=0,p=1;
    scanf("%d",&n);
    while(n>0)
    {
        id=n%10;
        sum=sum+id;
        p=p*id;
        n/=10;
    }
    if(sum==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}