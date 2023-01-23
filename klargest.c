#include <stdio.h>
int main()
{
    int i, j, k, num, temp;
    printf("Enter the array size = ");
    scanf("%d", &num);
    int arr[num];
    printf("Enter the array element = ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", arr+i);
    }
    for (i = 0; i < num; i++)
    {
        for (j = i + 1; j < num; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array element are\n");
    for(i = 0; i < num; i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("Enter the kth smallest element = ");
    scanf("%d", &k);
    printf("%d\n", arr[k - 1]);

    return 0;
}