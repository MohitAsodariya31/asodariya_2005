/*#include <stdio.h>
int main()

{
    int i, j, k = 0, n = 4;

    for (i = 1; i <= n; i++)
    {
        k += i;
        for (j = k; j > k - i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}*/
#include <stdio.h>
int main()
{
    int i, j, k = 0, p, sp = 5;
    for (i = 1; i <= 5; i++)
    {
        k = k + i;
        p = k;
        for (j = 1; j <= sp; j++)
            printf("\t");
        for (j = 1; j <= i; j++)
        {
            printf("\t%d", p);
            p--;
        }
        printf("\n");
        sp--;
    }
    return 0;
}
/*{
    int i, j, a = 1;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}*/