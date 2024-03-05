#include<stdio.h>
void creategraph(int arr[10][10],int n) 
{ 
    int i,j;
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=n;j++)
    	{
    		printf("Enter edge[%d-%d]:",i,j);
    		scanf("%d",&arr[i][j]);
    	
	if(arr[i][j]==0)
		{
			arr[i][j]=9999;
		}
    	}
    }
} 
void display(int arr[10][10],int n) 
{ 
    int i,j; 
    for(i=1;i<=n;i++) 
    { 
        for(j=1;j<=n;j++) 
        { 
	if(arr[i][j]==9999)
	{
		printf("INF\t");
	}
	else
	{
            printf("%d ",arr[i][j]); 
        }
	}	
        printf("\n"); 
     

    }
}
int main()
{
	int cost[10][10],visited[10]={0};
	int i,j,n,min,a,b;
	int count=0,min_cost=0;
	printf("Enter totalno of vertices:");
	scanf("%d",&n);
	creategraph(cost,n);
	display(cost,n);
	visited[1]=1;
	while(count <n-1)
	{
		min=1000;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(cost[i][j]<min)
				{

					if(visited[i]!=0)
					{
						min=cost[i][j];
						a=i;
						b=j;
					}
				}
			}
		}
	if(visited[b]==0)
	{
		printf("\n%d to %d cost:%d",a,b,min);
		min_cost=min_cost+min;
		count++;
	}
	visited[b]=1;
	cost[b][a]=cost[a][b]=1000;
	}
	printf("\nMin weight:%d",min_cost);
	return 0;
}


