#include<stdio.h>
#include<conio.h>
int f=-1,r=-1,q[5],max=5,i;
void push(int val)
{
    if(r+1==max)
    printf("\n que is alredy full");
    else if(f==-1&&r==-1)
    {
        q[++f]=val;
        r++;
    }
    else
    q[++r]=val;
}
void pop()
{
    if(f==-1&&r==-1)
        printf("\n que is alredy empty");
    else if(f==r)
        f=r=-1;
    else
        ++f;
}
void print()
{
    if(f==-1)
    {
        printf("\n que is empty...");
    }
    else 
    {
        for(i=f;i<r;i++)
            printf("\t %d",q[i]);
    }
}
int main()
{
    int ch,val;
    do
    {
        printf("\n press 1 for-->push");
        printf("\n press 2 for-->pop");
        printf("\n press 3 for-->show");
        printf("\n press 0 for-->exit");
        printf("\n enter choice=");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                printf("\n enter value=");
                scanf("%d",&val);
                push(val);
                break;

            case 2:
                pop();
                break;

            case 3:
                print();
                break;

            case 0:
                break;
        } 
    } while (ch!=0);
}
