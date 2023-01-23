#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createnode(int data)
{
    struct node *n = NULL;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->right = NULL;
    n->left = NULL;
    return n;
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postOrder(struct node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int main()
{
    struct node *p = createnode(4);
    struct node *p1 = createnode(1);
    struct node *p2 = createnode(6);
    struct node *p3 = createnode(5);
    struct node *p4 = createnode(2);

    // Linking the nodes

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    printf("1.preorder\n2.postorder\n3.inorder\n");
    int choice = 1;
    do
    {
        printf("\nChoose the option = ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            preorder(p);
            break;
        case 2:
            postOrder(p);
            break;
        case 3:
            inOrder(p);
            break;
        case 4:
            exit(0);
        default:
            printf("Enter the valid choice");
        }

    } while (choice);

    // preorder(p);
    // postOrder(p);
    // inOrder(p);

    return 0;
}