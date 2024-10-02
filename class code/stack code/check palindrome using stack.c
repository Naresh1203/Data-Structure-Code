#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int top=-1;
char stack[100];
void push(char c,int length);
char pop();
void main()
{
    int i,s,l,flag;
    char ch,arr[100],a2[100];
    printf("Enter a string:  ");
    gets(arr);
    l=strlen(arr);
    for(i=0;i<l;i++)
        push(arr[i],l);
    printf("Reverse string is: ");
    for(i=0;i<l;i++)
    {
    a2[i]=pop();
        printf("%c",a2[i]);
        
    }
        for(i=0;i<l;i++)
        {
            if(a2[i]!=arr[i])
        {
            printf("\nGivin String is not Palindrome");
            exit(1);
        }
        else
        flag=1;
        
    }
    if(flag==1)
    printf("\nString is Palindrome");
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