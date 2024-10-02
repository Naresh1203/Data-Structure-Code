#include <stdio.h>
#define X 3

int stack[X];
int top = -1;

void push();
void pop();
void peek();
void display();

int main()
{
    int n;

    printf("Enter 1 for Push\nEnter 2 for Pop\nEnter 3 for Peek\nEnter 4 for Display\nEnter 5 for Exit\n");

    do
    {
        scanf("%d", &n);

        switch (n)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                break;
            default:
                printf("\nWrong Number Entered\n");
        }
    } while (n != 5);

    return 0;
}

void push()
{
    int a;

    if (top == X - 1)
        printf("Stack is full\n");
    else
    {
        printf("\nEnter the Number: ");
        scanf("%d", &a);
        top++;
        stack[top] = a;
    }
}

void pop()
{
    if (top == -1)
        printf("\nStack is empty\n");
    else
    {
        top--;
    }
}

void peek()
{
    if (top == -1)
        printf("Stack is empty\n");
    else
    {
        printf("\n%d\n", stack[top]);
    }
}

void display()
{
    int i;
    for (i = top; i >= 0; i--)
        printf("%d ", stack[i]);
    printf("\n");
}
