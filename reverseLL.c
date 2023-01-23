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
    int i, n;
    struct node *newnode;
    // newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the number of node = ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
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
}
int display()
{
    struct node *store = head;
    if (head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        while (store != NULL)
        {
            printf("%d->", store->data);
            store = store->next;
        }
        printf("NULL\n");
    }
}
int reverse()
{
    struct node*prev,*curr,*nextnode;
    prev=NULL;
    curr=nextnode=head;
    if(head==NULL)
    {
        printf("No Element in the list");
    }
    while(nextnode!=NULL)
    {
    nextnode=nextnode->next;
    curr->next=prev;
    prev=curr;
    curr=nextnode;
    }
    head=prev;
}




int main()
{
    int choose = 1;
    printf("1.create\n.2.display\n.3.Reverse\n");
    {
        do
        {
            printf("\nChoose the option = ");
            scanf("%d", &choose);
            switch (choose)
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
                printf("Enter the valid option");
            }
        } while (choose);
    }

    return 0;
}