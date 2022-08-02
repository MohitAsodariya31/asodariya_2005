#include<stdio.h>
int main()
{
	int i,j,a[3][3],b[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter value a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
			printf("enter value b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		printf("\n\n");
		for(j=0;j<3;j++)
		{
			printf("\n%d",a[i][j]);
		}
			printf("\t\t");
			for(j=0;j<3;j++)
		{
			printf("\t%d",b[i][j]);
		}
		printf("\t\t");
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]+b[i][j]);
		}
	}
}