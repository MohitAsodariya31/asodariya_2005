#include<stdio.h>
int dosum()
{
	int a,b;
	printf("\n enter value for a & b :");
	scanf("%d%d",&a,&b);
	
	return a+b;
}
int main()
{
	int n;
	n=dosum();
	printf("\n a+b=%d",n);
}