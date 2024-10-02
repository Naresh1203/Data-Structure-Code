#include <stdio.h>
#include <stdlib.h>

#define NN (struct node *)malloc(sizeof(struct node))

struct node
{
    int info;
    struct node *next;
};

void addEdge(struct node *head[], int i, int j)
{
    struct node *temp, *last;
    temp = NN;
    temp->next = NULL;
    temp->info = j;

    if (head[i] == NULL)
    {
        head[i] = temp;
    }
    else
    {
        for (last = head[i]; last->next != NULL; last = last->next)
            ;
        last->next = temp;
    }
}

void createGraph(struct node *head[], int n)
{
    int i, j;
    char c;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Is there an edge between %d and %d? (y/n): ", i, j);
            getchar(); // consume newline
            c = getchar();
            if (c == 'y' || c == 'Y')
            {
                addEdge(head, i, j);
            }
        }
 
