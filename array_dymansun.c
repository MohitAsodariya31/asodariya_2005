#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, k;
    int arr[3][3][3];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("\n array is [%d] [%d] [%d] :", i, j, k);
                scanf(" %d", &arr[i][j][k]);
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf(" %d", arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
