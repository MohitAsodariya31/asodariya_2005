#include<stdio.h>
int dosum(int a,int b)
{
	return a+b;
}
int main()
{
	int a,b;
	printf("\n enter value for a & b :");
	scanf("%d%d",&a,&b);
	printf("\n a+b=%d",dosum(a,b));
}