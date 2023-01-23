#include <stdio.h>
int main()
{
    int a[50], size, i;
    printf("Enter the size of array = ");
    scanf("%d", &size);
    printf("Enter the array Element = ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Reverse Array of element are = ");
    for (i = size-1; i >=0; i--)
    {
        printf("%d", a[i]);
    }
    return 0;
}