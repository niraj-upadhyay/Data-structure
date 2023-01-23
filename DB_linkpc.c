#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
struct node *temp = NULL;

int create()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data = ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    newnode->prev = NULL;
    if (head == NULL)
    {
        head = temp = newnode;
    }
    else
    {
        temp->next = newnode;
        newnode->prev = temp;
        temp = newnode;
    }
}

int display()
{
    struct node *AB;
    AB = head;
    if (AB == NULL)
    {
        printf("List is empty");
    }
    else
    {
        while (AB != NULL)
        {
            printf("%d ", AB->data);
            AB = AB->next;
        }
    }
}

int main()
{
    int choice = 1;
    printf("1.create\n.2.display\n");
    do
    {
        printf("\nchose the option = ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        default:
            printf("Choose the valid option = ");
        }
    }while(choice);
}