#include<stdio.h>
int main()
{
    int i,j,x,n=5;
    for(i=1;i<=n;i++)
    {
        x=i;
        for(j=1;j<=4;j++)
        {
            printf("\t %d",x);
            x+=n;
        }
        printf("\n");
    }
}