#include <stdio.h>
int main()
{
    int i = 1, n = 1;
    for (;;)
    {
        if (i > 10)
            break;
        else
            printf("\n%d", i++);
    }
    printf("\n2.%d", i);
    printf("\n2.%d", n);
    return 0;
}