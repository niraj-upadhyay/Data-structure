#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *Front = NULL;
struct node *Rarer = NULL;
void show()
{
    if (Front == NULL && Rarer == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        struct node *HD = Front;
        while (HD != NULL)
        {
            printf("%d ", HD->data);
            HD = HD->next;
        }
        printf("\n");
    }
}
void Enqueue(int data)
{
    struct node *NewNode = (struct node *)malloc(sizeof(struct node));
    NewNode->data = data;
    NewNode->next = NULL;
    if (Front == NULL && Rarer == NULL)
    {
        Front = Rarer = NewNode;
    }
    else
    {
        Rarer->next = NewNode;
        Rarer = NewNode;
    }
}
void Dequeue()
{
    struct node *HD = Front;
    if (Front == NULL && Rarer == NULL)
    {
        printf("UnderFlow!\n");
    }
    else if (Front == Rarer)
    {
        Front = Rarer = NULL;
    }
    else
    {
        printf("Dequeue value is : %d\n", HD->data);
        Front = Front->next;
        free(HD);
    }
}
int main()
{
    int data, choice;
    do
    {
        printf("\n1) For Enqueue\n2) For Dequeue\n3) For Show\n0) For stop");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter your data : ");
            scanf("%d", &data);
            Enqueue(data);
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            show();
            break;
        }
    } while (choice);
    return 0;
}