// i = Row = |
// j = col = --
#include <stdio.h>              
int main()                       
{
	int a[100],n,i,j;
	printf("enter array size :");
	scanf("%d",&n);
	printf("enter eliments :");
	for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
	for ( int i = 0; i < n; i++)                     
	{
		for (int j = 0; j < n; j++)             
		{
			if (a[j] > a[i])                
			{
				int tmp = a[i];         
				a[i] = a[j];            
				a[j] = tmp;             
			}  
		}
	}
	printf("\n\nAscending : ");                     
	for (int i = 0; i < n; i++)                     
	{
            	printf(" %d ", a[i]);
	}
	for (int i = 0; i < n; i++) //row                  
	{
        
		for (int j = 0; j < n; j++)   //col          
		{
			if (a[j] < a[i])                
			{
				int tmp = a[i];        
				a[i] = a[j];           
				a[j] = tmp;            
			}
		}
	}
	printf("\nDescending : ");                    
	for (int i = 0; i < n; i++)                     
	{
		printf(" %d ", a[i]);                  
	}         
}
