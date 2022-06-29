#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j>i)
            {
            printf(" *");
            }
            else
            printf("%2d",i);
        }
         printf("\n");
    }
}