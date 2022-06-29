#include<stdio.h>
int main()
{
	int i,j,n=5;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||j==1||i==n||j==n||i==j||j==i)
				printf(" *");
            else if(j==2&&i==4)
            {
                printf(" *");
            }
            else if(j==4&&i==2)
            {
                printf(" *");
            }
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}