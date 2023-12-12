#include<stdio.h>
int main()
{
    int a,b,i,j,sum1=0,sum2=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        sum1=sum1+i;
    }
    for(j=1;j<b;j++)
    {
        if(b%j==0)
        sum2=sum2+j;
    }
    if(sum2==a && sum1==b)
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}