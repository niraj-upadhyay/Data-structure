#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

char stack[MAX];
char infix[MAX], postfix[MAX];
int top = -1;

void push(char);
char pop();
int isEmpty();
void inTopost();
int space(char);
void print();
int precedence(char);

int main()
{
    printf("Enter the infix expression = ");
    gets(infix);

    inTopost();
    print();
    return 0;
}
void inTopost()
{
    int i, j = 0;
    char next;
    char symbol;
    for (i = 0; i < strlen(infix); i++)
    {
        symbol = infix[i];
        if (!space(symbol))
        {
            switch (symbol)
            {
            case '(':
                push(symbol);
                break;
            case ')':
                while ((next = pop()) != '(')
                {
                    postfix[j++] = next;
                    break;
                }
            case '+':
            case '-':
            case '/':
            case '^':
            case '*':
                while (precedence(stack[top]) >= precedence(symbol))
                {
                    postfix[j++] = pop();
                }
                push(symbol);
                break;
            default: // if the symbol is operend
                postfix[j++] = symbol;
            }
        }
    }
    while (!isEmpty())
    {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
}
int space(char c)
{
    // if the symbol is blank space or a tab
    if (c == ' ' || c == '\t')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int precedence(char symbol)
{

    switch (symbol)
    {
    case '^':
        return 3;
        break;
    case '/':
    case '*':
        return 2;
        break;
    case '+':
    case '-':
        return 1;
        break;
    default:
        return 0;
        break;
    }
}
void print()
{
    int i = 0;
    printf("The equivalent postfix expression is:");
    while (postfix[i])
    {
        printf("%c", postfix[i++]);
    }
    printf("\n");
}
void push(char c)
{
    top++;
    stack[top] = c;
}
char pop()
{
    char c;
    c = stack[top];
    top = top - 1;
    return c;
}
int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
