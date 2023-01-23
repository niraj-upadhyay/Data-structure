#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
struct node *temp=NULL;


int create();
int Display(); 
int initialnode();
int lastnode();
int countnode();
int frontdelete();
int enddelete();

int main()
{
    int choice = 1;
    printf("1.Create\n 2.Display\n 3.exit\n 4.insert at first position\n 5.insert at end\n.6.count the no of node\n.7.Delete the front node.\n.8.Detete the end node\n.9.Reverse the list\n");
    //while (choice)
    do
    {
        printf("Choose the option = ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            Display();
            break;
        case 3:
        	exit(1);
        	break;
        case 4:
        	initialnode();
        	break;
        case 5:
        	lastnode();
        	break;
        case 6:
        	countnode();
        	break;
        case 7:
        	frontdelete();
        	break;
        case 8:
        	enddelete();
        	break;
        default :
        	printf("Enter the valid choice\n");
        }
    }while(choice);
}
int create()
{
    struct node *newnode;
    int i, n;
    printf("Enter the number of node = ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the Number = ");
        scanf("%d", &newnode->data);
        if (head == 0)
        {
            temp = head = newnode;
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


int Display()
{
	struct node*AD=head;
	if(AD==NULL)
	{
		printf("List is Empty");
	}
	else
    while (AD != NULL)
    {
        printf("%d ", AD->data);
        AD = AD->next;
    }
    printf("\n");
}


int initialnode()
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the Initial node = ");
	scanf("%d",&newnode->data);
	newnode->next=head;
	head = newnode;
    printf("\n");
}

int lastnode()
{
	struct node*newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the last node = ");
	scanf("%d",&newnode->data);
	temp->next=newnode;
	newnode->next=NULL;
}
int countnode()
{
	int count=0;
	struct node*temp;
	temp=head;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	printf("number of node is %d\n",count);
}
int frontdelete()
{
	temp=head;
	head=head->next;
	free(temp);
}

int enddelete()
{
	struct node *prevnode;
	temp=head;
	while(temp->next!=NULL)
	{
		prevnode=temp;
		temp=temp->next;
	}
	if(head==temp)
	{
		head=0;
	}
	else
	{
		prevnode->next=NULL;
	}
	free(temp);
}