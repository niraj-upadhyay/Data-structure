#include <stdio.h>
int main()
{
    int a[50], size, i, num;
    printf("Enter the size of array = ");
    scanf("%d", &size);
    printf("Enter the array Element = ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number you want to search =");
    scanf("%d",&num);
    for(i=0;i<size;i++)
    {
        if(a[i]==num)
        {
            printf("Element found at index is %d=",i);
            break;
        }
    }
    if(size==i)
    {
        printf("Element does not found");
    }

} 