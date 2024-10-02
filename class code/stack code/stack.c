# define x 3
#include<stdio.h>
int top=-1;
int stack[x];
void push()
{
    int a;
    printf("Enter the Number : ");
    scanf("%d",&a);
    if(top==x-1)
    printf("Stack is full");
    else
    {
        top++;
        stack[top]=a;
    }
}
void pop()
{
    if(top==-1)
    printf("Stack is empty");
    else
    top--;
}
void peek()
{
    if(top==-1)
    printf("Stack is empty");
    else
    printf("%d",stack[top]);
}
void display()
{   int i;
    for(i=top-1;i<=0;i--)
    printf("%d ",stack[top]);
}
void main()
{
    int s;
    printf("Enter 1 for Push \nEnter 2 for Pop\nEnter 3 for Peek\nEnter 4 for display\n");
    scanf("%d",&s);
    switch(s)
    {
        case 1: push();
                break;
        case 2: pop();
                break;
        case 3: peek();
                break;
        case 4: display();
                break;
        default: printf("Wrong number");
    }
    
}