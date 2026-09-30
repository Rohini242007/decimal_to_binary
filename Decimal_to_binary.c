#include <stdio.h>

#define MAX 32

int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        stack[++top] = value;
    }
}

int pop()
{
    if (top == -1)
    {
        return -1;
    }
    else
    {
        return stack[top--];
    }
}

int main()
{
    int decimal, remainder;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal == 0)
    {
        printf("Binary = 0\n");
        return 0;
    }

    while (decimal > 0)
    {
        remainder = decimal % 2;
        push(remainder);
        decimal = decimal / 2;
    }

    printf("Binary = ");

    while (top != -1)
    {
        printf("%d", pop());
    }

    printf("\n");

    return 0;
}
