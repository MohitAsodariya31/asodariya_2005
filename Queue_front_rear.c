#include<stdio.h>
int i,f=-1,r=-1,n=7;
int a[7];
void rear_insert(int val)
{

    if(f==-1 && r==-1)
    {
        
        f=0;
        r=0;
        a[r]=val;
        
    }
    else if((r+1)%n==f)
    {
        printf("\n------Queue is full------");
    }
    else
    {
        r=(r+1)%n;
        a[r]=val;
    }
}
void delete()
{
    
}
void print()
{
    i=f;
    if(f==-1 && r==-1)
    {
        printf(" ------Queue is empty------\n");
    }
    else
    {
       while(i<=r)
       {
        printf("\n%d",a[i]);
        i=(i+1)%n;
       }

    }
}
int main()
{
    int ch,val;
    do
    {
        printf("\n ------rear_insert -->press 1------ \n ------show -->press 5------ \n ------exit-->press 0------");
        printf("\n\nenter choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\n\tenter value:");
            scanf("%d",&val);
            rear_insert(val);
            break;
        case 5:
            print();
            break;
        case 0:
            exit(0);
            break;            
        default:
            printf("------wrong choice------");
            break;
        }
    } while (ch!=0);   
}