#include <stdio.h>
int n = 5, top = -1, stack[5];
void push(int val)
{
    if (top > n)
        printf("\n over flow");
    else
        stack[++top] = val;
}
int pop()
{
    int x;
    if (top <= -1)
        return 0;
    else
        x = stack[top--];
    return x;
}