#include<stdio.h>
int main()
{
	int a[10],sum=0,i;
	for(i=0;i<5;i++)		
	{
		printf("enter value a[%d] :",i);
		scanf("%d",&a[i]);
	}	
	for(i=0;i<4;i++)
	{
		printf("\n a[%d] - %d",i,a[i]);
		sum=a[i]+a[i+1];
		printf("\t sum is %d",sum);
	}
}