#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,sum,SQ,diff;
    scanf("%d",&n);
    r=(n*(n+1)*(2*n+1))/6;
    sum=(n*(n+1))/2;
    SQ=pow(sum,2);
    diff=SQ-r;
    printf("%d",diff);
}