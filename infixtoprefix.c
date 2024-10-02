#include<stdio.h>
#include<ctype.h>
#include<string.h>

char stack[20];
int top=-1;

void push(char x)
{
	top++;
	stack[top]=x;
}
char pop()
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
	if(x=='+' ||x=='-')
		return 1;
	if(x=='*' || x=='/')
		return 2;
	return -1;//for wrong operation.
}
void reverse(char a[20],char rev[20])
{
	int i=0;
	int length=strlen(a);
	int end=length-1;

	while(end!=-1)
	{
		if(a[end]==')')
		{
			rev[i]='(';	
		}
		else if(a[end]=='(')
		{
			rev[i]=')';
		}

		else
			rev[i]=a[end];

		i++;
		end--;
	}
	rev[i]='\0';
}

int main()
{
	char exp[20],rev_exp[20],postfix[20],prefix[20];
	char *e,ch;
	int i=0;
	printf("Enter the infix expression:");
	scanf("%s",exp);
	reverse(exp,rev_exp);
	e=rev_exp;
	while(*e!='\0')
	{
		if(*e=='(')
		{
			push(*e);
		}
		else if(isalnum(*e))
		{
			postfix[i]=*e;
			i++;
		}
		else if(*e==')')
		{
			while((ch=pop())!='(')
			{
				postfix[i]=ch;
				i++;
			}
			
		}
		else
		{
			while(priority(stack[top])>=priority(*e))
		
						{	
							postfix[i]=pop();
							i++;
						}
			push(*e);
						
		}
		e++;
	}
	while(top!= -1)
	{
		postfix[i]=pop();
		i++;
	}
	postfix[i]='\0';
		reverse(postfix,prefix);
		printf("Prefix expression is %s",prefix);
	return 0;
}	
							

