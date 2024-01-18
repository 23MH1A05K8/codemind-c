#include<stdio.h>
int main()
{
    int i,m,n;
    scanf("%d%d",&m,&n);
    for(i=n;i>0;i--)
    {
        if(n%i==0&&m%i==0)
        {
            printf("%d",i);
            break;
        }
    }
}