#include<stdio.h>
int main()
{
    int n,id=0;
    scanf("%d",&n);
    while (n>0)
    {
        int d=n%10;
        if (d>id)
        {
            id=d;
        }
        n/=10;
 
    }
    printf("%d",id);
}