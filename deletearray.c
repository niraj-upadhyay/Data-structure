#include <stdio.h>
int main()
{
    int a[50], size, i, pos;
    printf("Enter the size of array = ");
    scanf("%d", &size);
    printf("Enter the array Element = ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    //printf("Enter the number : ");
    //scanf("%d", &num);
    printf("Enter the position you want to delete = ");
    scanf("%d", &pos);
    if (pos <= 0 || pos > size + 1)
    {
        printf("invalid position\n");
        return 0;
    }
    else
    {
        for(i=pos-1;i<size-1;i++)
        {
            a[i]=a[i+1];
        }
    }
    size--;
    printf("Remaining array element are=");
    for(i=0;i<size;i++)
    {
        printf("%d",a[i]);
    }

}