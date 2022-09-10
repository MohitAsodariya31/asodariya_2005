#include <stdio.h>
#include <stdlib.h>
int n;
void print(int a[])
{
    int i;
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
void Quicksort(int a[], int first, int last)
{
    int i, j, pivot, temp;
    if (first < last)
    {

        pivot = first;
        i = first;
        j = last;

        while (i < j)
        {
            printf("\n inside Quick :");
            print(a);
            while (a[i] <= a[pivot] && i < last)
                i++;
            while (a[j] > a[pivot])
                j--;
            if (i < j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;
        Quicksort(a, first, j - 1);
        Quicksort(a, j + 1, last);
    }
}
int main()
{
    int i, a[25], min = 20, max = 101;
    printf("how many elements :");
    scanf("%d", &n);
    // printf("\nenter %d element :", n);
    for (i = 0; i < n; i++)
        a[i] = (rand() % (max - min)) + min;
    print(a);
    Quicksort(a, 0, n - 1);
    printf("\n\n order of sorted element :");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

/*
how many elements :10
61 100 36 33 73 30 77 56 90 22 
 inside Quick :61 100 36 33 73 30 77 56 90 22 
 inside Quick :61 22 36 33 73 30 77 56 90 100 
 inside Quick :61 22 36 33 56 30 77 73 90 100 
 inside Quick :30 22 36 33 56 61 77 73 90 100 
 inside Quick :22 30 36 33 56 61 77 73 90 100 
 inside Quick :22 30 33 36 56 61 77 73 90 100 
 inside Quick :22 30 33 36 56 61 73 77 90 100 

 order of sorted element :22 30 33 36 56 61 73 77 90 100 
 */