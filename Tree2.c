#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node * createnode( int data)
{
    struct node *n=NULL;
    n=(struct node*)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

void inorder(struct node *root)
{
    while(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    while(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    while(root!=NULL)
    {
        preorder(root->left);
        preorder(root->right);
        printf("%d ",root->data);
    }
}





int main()
{
    /*struct node *p=createnode(2);
    struct node *p1=createnode(4);
    struct node *p2=createnode(9);
    struct node *p3=createnode(6);
    struct node *p4=createnode(5);
    struct node *p5=createnode(8);
    struct node *p6=createnode(7);

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    p2->left=p5;
    p2->right=p6;*/

    //inorder(p);

    struct node *p=createnode(4);
    struct node *p1=createnode(1);
    struct node *p2=createnode(6);
    struct node *p3=createnode(5);
    struct node *p4=createnode(2);


  // Linking the nodes

  p->left=p1;
  p->right=p2;
  p1->left=p3;
  p1->right=p4;

  inorder(p);


    
    return 0;
}