#include <stdio.h>
#include <stdlib.h> 

struct node
{
    int data;
    struct node *link;
};


struct node *create(struct node *);
void display(struct node *);

int main()
{
    int ch;
    struct node *head = NULL;

    do
    {
        printf("\nMENU:    ");
        printf("1.Create\t 2.Display\t 3.Exit"); 
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            head = create(head);
            break;
        case 2:
            printf("Linked list\n"); 
            display(head);
            break;
        }
    } while (ch != 3);

    return 0; 
}

struct node *create(struct node *h)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->link = NULL;
    printf("Enter Element: ");
    scanf("%d", &temp->data);
    if (h == NULL)
        h = temp;
    else
    {
        struct node *next = h; 
        while (next->link != NULL)
            next = next->link;
        next->link = temp;
    }
    return (h);
}

void display(struct node *h)
{
    struct node *next = h; 
    while (next != NULL)
    {
        printf("\t%d", next->data);
        next = next->link;
    }
}
