#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int top=-1;

char stack[100];
void push(char s[],int length);
void pop(char s_2[]);
int main()
{	char s[100],s_2[100];
	int length,i,flag=0;
	printf("Accept a String:");
	gets(s);
	printf("String is :");
	puts(s);
	length=strlen(s);
	push(s,length);
	pop(s_2);
	printf("\nreverse string is :");
	for(i=0;i<length;i++)
		printf("%c",s_2[i]);
	
	for(i=0;i<length;i++)
	{
		if(s[i]!=s_2[i])
		{	printf("\nGiven string is not palindrome");
			exit(1);
		}
		else
		{
			flag=1;
		}
	}
	if(flag==1)
		printf("\nGiven string %s is palindrome",s);
	return 0;

}


			


void push(char s[],int length)
{
	int i;
	for(i=0;i<length;i++)
	{	top++;
		stack[top]=s[i];
	}
}
void pop(char s_2[])
{

	int j=0;
	while(top>=0)
	{
		s_2[j]=stack[top];
		top--;
		j++;
	}

}

