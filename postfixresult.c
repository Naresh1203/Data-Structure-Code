#include<stdio.h>
#include<string.h>
int sum();
int sub();
int mul();
int div();
int power();
int stack[20];
int top=-1;
void main()
{	int i;
	char s[20];
	printf("\nEnter the Expression:");
	scanf("%s",s);
	printf("\nGiven expression is %s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!=' ')
		{
			switch(s[i])
			{
				case '+':sum();
					 break;
				case '-':sub();
					 break;
				case '*':mul();
					 break;
				case '/':div();
					 break;
				case '^':power();
						break;
				default:top++;
					stack[top]=s[i]-48;
			}
		}
	}
	printf("\nResult: %d ",stack[top]);
}
int sum()
{
	int a,b,result;
	a=stack[top];
	top--;
	b=stack[top];
	top--;
	result=a+b;
	top++;
	stack[top]=result;
	return 0;
}
int sub()
{
	int a,b,result;
	a=stack[top];
	top--;
	b=stack[top];
	top--;
	result=a-b;
	top++;
	stack[top]=result;
	return 0;
}

int mul()
{
	int a,b,result;
	a=stack[top];
	top--;
	b=stack[top];
	top--;
	result=a*b;
	top++;
	stack[top]=result;
	return 0;

}

int div()
{
	int a,b,result;
	a=stack[top];
	top--;
	b=stack[top];
	top--;
	result=a/b;
	top++;
	stack[top]=result;
	return 0;
}

int power()
{
	int a,b,result;
	a=stack[top];
	top--;
	b=stack[top];
	top--;
	result=a^b;
	top++;
	stack[top]=result;
	return 0;
}


