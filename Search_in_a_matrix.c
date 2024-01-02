#include<stdio.h>
int main()
{
    int r,c,i,j,n,f=0;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&n);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]==n)
            {
                f=1;
                break;
            }
        }
    }
    if(f==1)
    {
        printf("1");
        
    }
    else
    {
        printf("0");
        
    }
}