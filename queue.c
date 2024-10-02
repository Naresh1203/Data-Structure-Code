#include<stdio.h>
#define s 5
int queue[s];
int front=-1;
int rear=-1;
void enque(int n);
void deque();
void display();
void main()
{
	enque(2);
	enque(3);
	enque(5);
	display();
	deque();
	display();
}
void enque(int n)
{
	if(rear==s-1)
		printf("Queue is full");
	else if(front==-1&rear==-1)
	{
		front=rear=0;
		queue[rear]=n;
	}
	else{
		rear++;
		queue[rear]=n;
	}
}
void deque()
{
	if(front==-1&rear==-1)
	{
		printf("Queue is Empty");
	}
	else if(front==rear)
	{
		front=rear=-1;
	}
	else{
		front++;
	}
}
void display()
{	int i=0;
	if(front==-1&rear==-1)
		printf("Queue is Empty:");
	else 
	{
		for(i=front;i<=rear;i++)
			printf("%d ",queue[i]);
	}
}

