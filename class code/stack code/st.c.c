
#include<stdio.h>
int push(int x);
int pop(int x);
int peek(int x);
int display(int x);
int top=-1;
int main()
{   int x,n;
    printf("Enter the size of Stack:");
    scanf("%d",&x);
    int s;
    int stack[x];
    printf("\nEnter 1 for stack operation \nEnter 2 for Exit");
    scanf("%d",&n);
   while(n!=2)
   {
    printf("\nEnter 1 for Push \nEnter 2 for Pop\nEnter 3 for Peek\nEnter 4 for display\nEnter 5 for Exit\n");
    scanf("%d",&s);
   
    switch(s)
    {
        case 1: push(x);
                break;
        case 2: pop(x);
                break;
        case 3: peek(x);
                break;
        case 4: display(x);
                break;
        case 5: break;
        default: printf("Wrong number");
    }
   }
}
int push(int x)
{   int n,stack[x];
    printf("\nEnter a number:");
    scanf("%d",&n);
    if(top==x-1)
    printf("Stack is full");
    else
{   top++;
    stack[top]=n;
    printf("%d",stack[top]);
}
}
int pop(int x)
{   int stack[x];
    if(top==-1)
    printf("Stack is empty");
    else
    {
        top--;
    }
}
int peek(int x)
{int stack[x];
    
    if(top==-1)
    printf("Stack is empty");
    else
    printf("%d",stack[top]);
}
int display(int x)
{   int i,stack[x];
    for(i=top;i>=-1;i--)
    {
        printf("%d ",stack[i]);
    }
}