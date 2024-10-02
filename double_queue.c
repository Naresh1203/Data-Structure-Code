#include<stdio.h>
#include<stdlib.h>
#define s 5
int queue[s];

int front =-1;
int rear =-1;
void enqueuefront();
void dequeuefront();
void enqueuerear();
void dequeuerear();
void display();
void main()
{
    int ch;
    do
    {
        printf("\n1. Enqueuefront\n2. Dequeuefront\n3.enquerear\n4.dequerear() 5. Display\n6. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: enqueuefront();
                    break;
            case 2: dequeuefront();
                    break;
            case 3: enqueuerear();
                    break;
            case 4: dequeuerear();
                    break;
            case 5: display();
                    break;
            case 6: exit(0);
                    break;
            default: printf("\nInvalid choice\n");
        }
    }while(ch!=6);
}
void enqueuefront()
{int a;
    if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        printf("\nEnter the number to enqueue:\n");
        scanf("%d",&a);  
        queue[front]=a;

    }
    else if((front-1+s)%s==rear)
    {
        printf("\nQueue is full\n");
    }
    else{

        front=(front-1+s)%s;
        printf("\nEnter the number to enqueue from front:\n");
        scanf("%d",&a);  
        queue[front]=a;
    }
}
void dequeuefront()
{
    if(front==-1&&rear==-1)
    {
        printf("\nQueue is Empty\n");

    }
    else if(front==0&&rear==0)
    {
        front=-1;
        rear=-1;
    }
    else{
        front=(front+1)%s;
    }
}
void enqueuerear()
{int a;
    if((front-1+s)%s==rear)
    {
        printf("\nQueue is Full\n");

    }
    else if (front==0&&rear==0)
    {
        rear=(rear+1)%s;
        printf("\nEnter the number you want to insert from rear\n");
        scanf("%d",&a);
        queue[rear]=a;

    }
    else
    {
        rear=(rear+1)%s;
        printf("\nEnter the number you want to insert from rear\n");
        scanf("%d",&a);
        queue[rear]=a;        
    }

    
}
void dequeuerear()
{
    if(front==-1&&rear==-1)
    {
        printf("\nQueue is Empty\n");
    }
    else if(front==0&&rear==0)
    {
        front=-1;
        rear=-1;
    }
    else{
        rear=(rear-1+s)%s;
    }
}
void display()
{
    int i=front;
    if(front==-1&&rear==-1)
    {
        printf("\nQueue is Empty\n");
    }
    else{   
        while(i!=rear)
        {
            printf("%d ",queue[i]);
            i=(i+1)%s;
        }
        printf("%d ",queue[rear]);

    }
    
}
