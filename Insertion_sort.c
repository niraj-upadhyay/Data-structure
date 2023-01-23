#include <stdio.h>

void printArray(int *a, int n)
{
    int i;
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int insetionsort(int *a, int n)
{
    int i, j, key;
    for (i = 1; i <= n - 1; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key) 
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main()
{
    int a[] = {12, 54, 65, 7, 23, 9};
    int n = 6;
    printArray(a, n);
    insetionsort(a, n);
    printArray(a, n);
    // printArray(a,n);

    return 0;
}