#include<stdio.h>
#include<string.h>
int top=-1;
char stack[100];
void push(char c,int length);
char pop();
void main()
{
    int i,s,l;
    char ch,arr[100];
    printf("Enter a string:  ");
    gets(arr);
    l=strlen(arr);
    for(i=0;i<l;i++)
        push(arr[i],l);
    printf("Reverse string is: ");
    for(i=0;i<l;i++)
    {
        ch=pop();
        printf("%c",ch);
    }
}
void push(char c ,int length)
{
    if(top<=length)
    {
        top++;
        stack[top]=c;
    }
    else 
    {
        printf("\nStack is full");
    }
}
char pop()
{
    char c;
    if(top!=-1)
    {
        c=stack[top];
        top--;
    }
    else
    {
        printf("\nStack is empty");
    }
    return c;
}