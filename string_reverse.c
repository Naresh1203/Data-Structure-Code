#include<stdio.h>
#include<string.h>

int top=-1;

char stack[100];
void push();
void pop();
void main()
{	char s[100];
	int length;
	printf("Accept a String:");
	gets(s);
	printf("String is :");
	puts(s);
	length=strlen(s);
	push(s,length);
	pop();

}
void push(char s[],int length)
{
	top++;
	int i;
	for(i=0;i<=length;i++)
	{
		stack[top]=s[i];
		top++;
	}
}
void pop()
{
	printf("\nReverse string is ");
	for(int i=top;i>=0;i--)
	{
		printf("%c",stack[i]);
	}
}

