#include <stdio.h>
#include <ctype.h>

char stack[100];
int top = -1;

void push(char x)
{
    top++;
    stack[top] = x;
}

char pop()
{
    if (top == -1)
        return 1;
    else
        return stack[top--];
}

int priority(char x)
{
    if (x == '+' || x == '-')
        return 2;
    if (x == '*' || x == '/')
        return 3;
    if (x == '^')
        return 4;

    return 0;
}

int main()
{
    char exp[100];
    char *e, x;
    printf("Enter the expression : ");
    scanf("%s", exp);
    printf("\n");
    e = exp;

    while (*e != '\0')
    {
        if (isalnum(*e))
        {
            printf("%c ", *e);
        }
        else if (*e == '(')
            push(*e);
        else if (*e == ')')
        {
            while ((x = pop()) != '(')
                printf("%c ", x);
        }
        else
        {
            while (priority(stack[top]) >= priority(*e))
            {
                printf("%c ", pop());
            }
            push(*e);
        }
        e++;
    }

    while (top != -1)
    {
        printf("%c ", pop());
    }
    return 0;
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char hh[30];
//     printf("Enter string : ");
//     gets(hh);
//     for (int i = 0; i < strlen(hh); i++)
//     {
//         printf("%c", *(hh + i));
//         ;
//     }

//     return 0;
// }