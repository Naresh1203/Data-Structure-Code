#include <stdio.h>
#define s 5
int queue[s];

int front = -1;
int rear = -1;

void enque();
void deque();
void display();

void main()
{
    int n;
    do
    {
        printf("\nMenu");
        printf("\n1.Enque\n2.Deque\n3.Display\n4.Exit.\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            enque();
            break;
        case 2:
            deque();
            break;
        case 3:
            display();
            break;
        
        }
    } while (n != 4);
}

void enque()
{
    int a;
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        printf("\nEnter the element to be inserted\n");
        scanf("%d", &a);
        queue[rear] = a;
    }
    else if ((rear + 1) % s == front)
    {
        printf("\nQueue is full");
    }
    else
    {
        rear = (rear + 1) % s;
        printf("\nEnter the element to be inserted\n");
        scanf("%d", &a);
        queue[rear] = a;
    }
}

void deque()
{
    if (front == -1 && rear == -1)
    {
        printf("\nQueue is empty");
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % s;
    }
}

void display()
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("Queue is Empty.	");
    }
    else
    {
        while (i != rear)
        {
            printf("%d ", queue[i]);
            i = (i + 1) % s;
        }
        printf("%d", queue[i]); // Print the last element
    }
}
