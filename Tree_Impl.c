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

void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
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

    // preorder(p);
    // postOrder(p);
    // inOrder(p);

    printf("1.inorder\n2.preorder\n3.postorder\n4.exit\n");
    int choice = 1;
    do
    {
        printf("\nEnter the choice = ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("inorder\n");
            inorder(p);
            break;
        case 2:
            printf("preorder\n");
            preorder(p);
            break;
        case 3:
            printf("postorder\n");
            postorder(p);
            break;
        case 4:
            exit(0);
        default:
            printf("wrong choice");
        }
    } while (choice);

    return 0;
}