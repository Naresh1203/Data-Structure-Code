#include<stdio.h>
#define s 5

int queue[s];

int front=-1;
int rear=-1;

void enque();
void deque();
void display();
void main()
{	int n;
	do{
		printf("Menu\n");
		printf("\n1.Enque\n2.Deque\n3.display\n4.Exit\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1:enque();
			       break;
			case 2:deque();
			       break;
			case 3:display();
			       break;
			}
	}while(n!=4);
}
void enque()
{
	int n;
	if(rear==s-1)
		printf("\nQueue is full");
	else if(rear==0&front==0)
	{
	printf("\nEnter the element:");
	scanf("%d",&n);
	queue[rear]=n;
	rear++;
	}
	else
	{	

		printf("\nEnter the element:");
		scanf("%d",&n);
		queue[rear]=n;
		rear++;
	}
}
void deque()
{
	if(rear==-1&front==-1)
	{
		printf("\nQueue is Empty:");
	}
	if(rear==front)
	{
		rear=-1;
		front=-1;
	}
	else
		front++;
}
void display()
{	int i;
	if(front==-1&rear==-1)
		printf("Queue is Empty:");
	else
	{
		for(i=front;i<rear;i++)
			printf("%d ",queue[i]);
	}
}

		

