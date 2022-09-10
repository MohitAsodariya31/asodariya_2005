#include <stdio.h>
int main()
{
    int i, arr[7], n;
    for (i = 0; i < 6; i++)
    {
        printf("Enter array of elements[%d]:", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 6; i++)
    {
        printf("\n a[%d]:%d", i, arr[i]);
    }
    printf("\n Enter element to insert in last:");
    scanf("%d", &n);
    arr[i] = n;
    printf("\n New array : ");
    for (i = 0; i < 7; i++)
        printf("%d ", arr[i]);
    printf("\n\n array length:%d", sizeof(arr) / sizeof(arr[0]));
    return 0;
}
