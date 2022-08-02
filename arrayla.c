#include<stdio.h>
int main()
{
	int a[10],i,max=0,min=0;
	for(i=0;i<5;i++)
	{
		printf("enter value :",i);
		scanf("%d",&a[i]);
	}
	max=a[0];
	max=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		else if(a[i<min])
		{
			min=a[i];
		}
		printf("\n largest number a[%d] = %d",i,max);
		printf("\n smallest number a[%d] = %d",i,min);
	}
	
}