#include <stdio.h>
int main()
{
    int a[50], size, i, num, pos;
    printf("Enter the size of array = ");
    scanf("%d", &size);
    printf("Enter the array Element = ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("Enter the position: ");
    scanf("%d", &pos);
    if (pos <= 0 || pos > size + 1)
    {
        printf("invalid position\n");
        return 0;
    }
    else
    {
        a[pos-1]=num;
        printf("Update array are :");
        for(i=0;i<size;i++)
        {
           printf("%d",a[i]);
        }

    }
}
