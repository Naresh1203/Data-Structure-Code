#include<stdio.h>
#define x 3
int stack[x];
int top=-1;
void push();
void pop();
void peek();
void display();
void main()
{
	int s;
	do
	{
	printf("\nEnter 1 for push\nEnter 2 for pop\nEnter 3 for peek\nEnter 4 for display\nEnter 5 for exit\n");
	scanf("%d",&s);

	switch(s)
	{
		case 1:push();
		       break;
		case 2:pop();
		       break;
		case 3:peek();
		       break;
		case 4:display();
		       break;
	}

	

	}while(s!=5);
}

void push()
{	
	if(top==x-1)
	{
	printf("\nStack is Full");
	}
	else{
		top++;
		int a;
		printf("\nEnter the no.");
		scanf("%d",&a);
		stack[top]=a;
	}
}
void pop()
{
	if(top==-1)
		printf("\nStack is Empty");
	else
	{
		top--;
	}
}
void peek()
{
	if(top==-1)
		printf("\nStack is empty");
	else{
	printf("\nPeek of stack is %d",stack[top]);
	}
}
void display()
{
	printf("\nElements of Stack are ");
	int i;
	for(i=top;i>=0;i--)
	{
	
		printf("%d ",stack[i]);
		
	}
}

	

	
