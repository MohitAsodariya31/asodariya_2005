#include <stdio.h>
#define n 5
int top = -1, stack[n], i;
void Push(int val)
{
    if (top > n - 1)
        printf("\n overflow");
    else
        stack[++top] = val;
}
void Pop()
{
    int x;
    if (top <= -1)
        printf("\n underflow");
    else
        x = stack[top--];
    printf("\n poped element is %d ", x);
}
void peep()
{
    int x;
    if (top - i + 1 < 0)
        printf("\n peep is element");
    else
        printf("\n  element is %d ", x);
}
void print()
{
    for (int i = 0; i <= top; i++)
    {
        printf("\n%d", stack[i]);
    }
}
int main()
{
    int ch, val;
    do
    {
        printf("\n press --> 1 for PUSH, \n press --> 2 for POP, \npress --> 3 for peep, \n press --> 4 for show, \n press --> 0 for EXIT.");
        printf("\nEnter choice  : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\n Enter value : ");
            scanf("%d", &val);
            Push(val);
            break;
        case 2:
            Pop();
            break;
        case 3:
            peep();
            break;
        case 4:
            print();
            break;
        case 0:
            exit(0);
            break;
        default:
            printf("\n wrong choice");
            break;
        }
    } while (n != 0);
}