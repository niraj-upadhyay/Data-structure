#include<stdio.h>

void printArray(int*a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

int Bubblesort(int *a,int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
    }
}



int main()
{
    int a[]={12,54,65,7,23,9};
    int n=6;
    printArray(a,n);
    Bubblesort(a,n);
    printArray(a,n);
    // int a[50],size,i;
    // int size,a;
    // printf("Enter the size of array = ");
    // scanf("%d",&size);
    // int a[size],i;
    // printf("Enter the array element = ");
    // for(i=0;i<size;i++)
    // {
    //     scanf("%d",&a[i]);
    // }
    

}