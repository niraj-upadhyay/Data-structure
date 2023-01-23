#include <stdio.h>
#include<stdlib.h>
#define N 5
void enqueue() ;
void dequeue() ;
void display() ;
int queue[N];
int front = -1;
int rear = -1;
int main()
{
    int choice = 1;
    printf("\n 1.Insert\n  2.delete\n 3.display\n 4.exit\n");
    do
    {
        printf("\nEnter the choice = ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
             break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Enter the valid choice");
        }
    } while(choice);
}
void enqueue()
{
    int x;
    printf("Enter the Element = ");
    scanf("%d",&x);
    if (rear == N - 1)
    {
        printf("overflow\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = 0;
		rear = 0;
        queue[rear] = x;
    }
    else
    {
        
        rear++;
        queue[rear] = x;
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("underflow\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("%d", queue[front]);
        front++;
    }
}
void display()
{
    int i; 
    if (front == -1 && rear == -1)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
    	printf("Elements in queue");
        for (i = front; i < rear + 1; i++)
        {
            printf("\n%d",queue[i]);
        }
    }
}