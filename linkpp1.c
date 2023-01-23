#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *temp = NULL;

int create()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the number = ");
    scanf("%d", &newnode->data);
    if (head == NULL)
    {
        head = temp = newnode;
        newnode->next = NULL;
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
        newnode->next = NULL;
    }
}

int display()
{
    struct node *store;
    store = head;
    if (store == NULL)
    {
        printf("\nList is empty");
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

int reverse()
{
    struct node *curr, *newnext, *prev;
    prev = NULL;
    curr = newnext = head;
    while (newnext != NULL)
    {
        newnext = curr->next;
        curr->next = prev;
        prev = curr;
        curr = newnext;
    }
    head = prev;
}





int main()
{
    int n = 1;
    printf("1.Create\n2.Display\n3.reverse\n");
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
            display();
            break;
        case 3:
           reverse();
           break;
        default:
            printf("Choose the valid option");
        }

    } while (n);

    return 0;
}