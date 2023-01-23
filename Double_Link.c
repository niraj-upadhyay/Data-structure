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
    int a;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the number = ");
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
        temp=newnode;
    }
}


int Display()
{
    struct node *store = head;
    if (store == NULL)
    {
        printf("List is empty");
    }
    else
    {
        while (store != NULL)
        {
            printf("%d ", store->data);
            store = store->next;
        }
    }
}

int main()
{
    int n = 1;
    printf("1.Create\n2.Display\n");
    do
    {
        printf("\nChoose the option = ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            create();
            break;
        case 2:
            Display();
            break;
        default:
            printf("Choose the valid option");
        }

    } while (n);

    return 0;
}
