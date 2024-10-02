#include<stdio.h>
#include<stdlib.h>
#define N 5
void enqueue(int x);
void dequeue();
void display();
int queue[N];
int front=-1;
int rear=-1;

void main()
{int num,n;
	do{
	printf("Enter 1 for Enter the number\nEnter 2 for Delete the number \nEnter 3 for Display \nEnter 4 for Exit\n");
	scanf("%d",&n);
		switch(n)
		{
			case 1:{printf("\nEnter the number you want to insert: ");
				      scanf("%d",&num);
				      enqueue(num);
				      break;
			       }
			case 2:{	dequeue();
				       	break;
			       }
			case 3:{
				       display();
				       break;
			       }
			
			      
		}	
	}while(n!=4);
	dequeue();
	display();
}
void enqueue(int x)
{
	if(rear==N-1)
		printf("Queue is overflow\n");
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
		printf("Queue is underflow\n");
	else if(front==rear)
		front=rear=-1;
	else
	{
		printf("\nThe number which we want to delete is %d",queue[front]);
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

