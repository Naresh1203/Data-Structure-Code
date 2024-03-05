#include<stdio.h>
#define initial 1
#define waiting 2
#define visited 3
#define max 10
int nv;
int arr[max][max] = {0};
int state[max] = {0};
int stack[max], top = -1;
void creategraph()
{
	printf("Enter total no of nodes : ");
	scanf("%d",&nv);
	int i,j;
	for(i = 0; i < nv; i++)
	{
		for(j = 0; j < nv; j++)
		{
			printf("Enter edge [%d-%d] : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}
void display()
{
	int i,j;
	for(i=0;i<nv;i++)
	{
		for(j=0;j<nv;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}
int is_empty()
{
	if(top == -1)
		return 1;
	else
		return 0;
}
int is_full()
{
	if(top == max -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push(int data)
{
	if(!is_full())
	{
		stack[++top] = data;
	}
}

int pop()
{
	if(!is_empty())
	{
		return stack[top--];
	}
}
void dfs(int v)
{
	int i;
	push(v);
	printf("BFS Sequence : \n");
	while(!is_empty())
	{
		v = pop();
		printf("%d ",v);
		state[v] = visited;
		for(i = 0; i < nv; i++)
		{
			if(arr[v][i] == 1 && state[i] == initial)
			{
				push(i);
				state[i]=waiting;
			}
		}
	}
}
void dfs_traversal()
{
	int i;
	for(i=0;i<nv;i++)
	{
		state[i] = initial;
	}
	printf("Enter starting vertex : ");
	scanf("%d",&i);
	dfs(i);
}
int main()
{
	creategraph();
	display();
	dfs_traversal();
	return 0;
}