#include<stdio.h>
void dosum()
{
	int a,b;
	printf("\n enter value for a & b :");
	scanf("%d%d",&a,&b);
	
	printf("\n a + b = %d",a+b);
}
int main()
{
	dosum();
}