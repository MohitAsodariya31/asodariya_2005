#include<stdio.h>
int main()
{
	int a[10],i,b[10],total;
	for(i=0;i<2;i++)
	{
		printf("enter a[%d] :",i);
		scanf("%d",&a[i]);
		printf("enter b[%d] :",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<2;i++)
	{
		printf("\n a[%d] :%d",i,a[i]);
		printf("\t b[%d] :%d",i,b[i]);
		total=a[i] + b[i];
		printf("\t total : %d",total);
	}
}
