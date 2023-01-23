#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
int push(int x)
{
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
    	printf("overrflow\n");
	}
	else
	{
    newnode->data=x;
    newnode->next=top;
    top=newnode;
    }
}
int pop()
{
    struct node*temp=top;
    if(top==NULL)
    {
    	printf("underflow");
	}
	else
	{
    printf("Popped element is %d\n ",top->data);
    top=top->next;
    free(temp);
    }
}
int display()
{
    struct node*store=top;
    if(store==NULL)
    {
    	printf("stack is empty");
	}
	else
	{
		
		 while(store!=NULL)
    {
        printf("%d ",store->data);
        store=store->next;
    }
		
}
   
}
int main()
{
    printf("1.push\n2.pop\n3.display");
    int choice = 1,x;
    do
    {
        printf("\nchoose the option = ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the number = ");
            scanf("%d", &x);
            push(x);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            printf("Enter the valid option");
        }
    } while (choice);
    return 0;
}