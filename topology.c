#include<stdio.h>
void creategraph(int arr[10][10],int n) 
{ 
    int i,j;
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		printf("Enter edge[%d-%d]:",i,j);
    		scanf("%d",&arr[i][j]);
    	}
    }
} 
void display(int arr[10][10],int n) 
{ 
    int i,j; 
    for(i=0;i<n;i++) 
    { 
        for(j=0;j<n;j++) 
        { 
            printf("%d ",arr[i][j]); 
        } 
        printf("\n"); 
    } 
} 
void main()
{
	int arr[10][10],topsort[10]={0},flag[10]={0},indeg[10]={0};
	int count=0,t=0;
	int i,j,f,n,k;
	printf("\nEnter total number of vertices:");
	scanf("%d",&n);
	creategraph(arr,n);
	display(arr,n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			indeg[i]=indeg[i]+arr[j][i];
		}
	}
	while(count<n)
	{
		for(i=0;i<n;i++)
		{
		if(indeg[i]==0&&flag[i]==0)
		{
			count++;
			f=1;
			topsort[t++]=i;
			flag[i]=1;
			for(k=0;k<n;k++)
			{
				if(arr[i][k]==1)
					indeg[k]--;
			}
			break;
		}
		}
	}
	if(f=0)
	{
		printf("\nNo topological order.");
	}
	else
	{
	printf("\nTopological order is:");
	for(i=0;i<t;i++)
	printf("%d\t",topsort[i]);
	}
}
