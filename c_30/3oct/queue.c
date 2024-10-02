#include<stdio.h>
#define N 5
void enqueue(int x);
void dequeue();
void display();
int queue[N];
int front=-1;
int rear=-1;

void main()
{int num,i;
	for(i=0;i<N;i++)
	{
		printf("Enter the number :");
		scanf("%d",&num);
		enqueue(num);
	}
	dequeue();
	display();
}
void enqueue(int x)
{
	if(rear==N-1)
		printf("Queue is overflow");
	else if(front==-1&&rear==-1)
	{
		front=rear=0;
		queue[rear]=x;
	}
	else
	{
		rear++;
		queue[rear]=x;
	}
}
void dequeue()
{
	if(front==-1&&rear==-1)
		printf("Queue is underflow");
	else if(front==rear)
		front=rear=-1;
	else
	{
		printf("The number which we want to delete is %d",queue[front]);
		front++;
	}
}
void display()
{
	int i;
	if(front==-1&&rear==-1)
		printf("Queue is empty");
	else
		for(i=front;i<=rear;i++)
			printf("\n%d ",queue[i]);
}

