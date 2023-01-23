#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack is overflow  %d not be push\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack is underflow ! cannot poped from the  stack \n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int peak(struct stack* sp,int i)
{
    int arrayInd = sp->top-i+1;
    if(arrayInd<0)
    {
        printf("Not a valid position for a stack\n");
        return -1;
    }
    else
    {
        return sp->arr[arrayInd];
    }
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack is sucessfull\n");

    printf("Before pushing , Full : %d\n", isFull(sp));
    printf("Before pusing , Empty : %d\n", isEmpty(sp));
    push(sp, 6);
    push(sp, 7);
    push(sp, 8);
    push(sp, 9);
    push(sp, 10);
    push(sp, 11);
    push(sp, 12);
    push(sp, 13);
    push(sp, 14);
    push(sp, 15); // pushed 10 values
    // push(sp,16);// stack overflow since the size of the stack is  10
    printf("After pushing , Full : %d\n", isFull(sp));
    printf("After pusing , Empty : %d\n", isEmpty(sp));
    printf("popped %d from the stack\n", pop(sp));
    printf("popped %d from the stack\n", pop(sp));
    printf("popped %d from the stack\n", pop(sp));
    printf("popped %d from the stack\n", pop(sp));
    for(int j = 1; j<sp->top+1;j++)
    {
        printf("The value at position %d is %d\n",j,peak(sp,j));
    }
}
