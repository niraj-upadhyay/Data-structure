#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int a[MAX], top = -1;
void push();
void pop();
void display();
int main()
{
    int choice = 1;
    printf("\n 1.push\n 2.pop\n 3.display\n 4.exit\n");
    do
    {
        printf("\nEnter the choice = ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            exit(0);
        }
        default:
        {
            printf("Wrong choice");
        }
        }
    } while (choice);
}
void push()
{
    int data;
    if (top == MAX - 1)
    {
        printf("Stack is overflow\n");
    }
    else
    {
        printf("Enter the no you want to push = ");
        scanf("%d", &data);
        top++;
        a[top] = data;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Stack is underflow");
    }
    else
    {
        printf("Poped element is %d", a[top]);
        top--;
    }
}
void display()
{
    int i;
    if (top >= 0)
    {
        printf("The element are");
        for (i = top; i >= 0; i--)
        {
            printf("\n%d", a[i]);
        }
    }
    else
    {
        printf("Stack is empty");
    }
}