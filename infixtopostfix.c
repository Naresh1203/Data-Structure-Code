#include<stdio.h>
#include<ctype.h>

char stack[20];
int top=-1;

void push(char x)
{
	top++;
	stack[top]=x;
}

int pop()
{
	char x;
	x=stack[top];
	top--;
	return x;
}
int priority(char x)
{
	if(x=='(')
		return 0;
	if(x=='*' || x=='/')
		return 2;
	if(x=='+' || x=='-')
		return 1;
}
void main()
{
	char exp[20],ch;
	char *e;
	printf("Enter the Infix Expression:");
	scanf("%s",exp);
	e=exp;
	while(*e != '\0')
	{
		if(*e=='(')
			push(*e);
		else if(isalnum(*e))
			printf("%c",*e);
		else if(*e==')')
		{
			while((ch=pop())!='(')
			{
				printf("%c",ch);
			}
		}
		else 
		{	
			while(priority(stack[top])>=priority(*e))
			{
				printf("%c",pop());
			}
			push(*e);
		}
		e++;
	}
	while(top!=-1)
	{	ch=pop();
		printf("%c",ch);
	}
}




