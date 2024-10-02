#include<stdio.h>
#include<stdlib.h>
void init();
void insert();
void display();
void delete();
void search();
int ht[10];
void main()
{
	int n;
	while(1)
	{
		printf("\n MENU\n");
		printf("\n1.Init \n2.Insert \n3.Display /4.Del \n 5.Search \n6.Exit \n");
		printf("\nEnter your choice");
		scanf("%d",&n);
		switch(n)
		{
			case 1:init();
			       break;
			case 2: insert();
			      break;
			case 3:display();
			       break;	
			case 4:delete();
			       break;
			case 5:search();
			       break;
			case 6:exit(0);
			       break;
			default:printf("\nInvalid \n");
				exit(0);
		}
	}
}
void init()
{
	int i;
	for(i=0;i<10;i++)
		ht[i]=-1;
}
void insert()
{
	int n,b,i;
	printf("\nEnter Element to insert\n");
	scanf("%d",&n);
	b=n%10;
	if(ht[b]==-1)
	{
		ht[b]=n;
		printf("\nElement %d inserted in %d Bucket",n,b);
		return;
 	}
	else
	{ if(b==9)
		b=-1;
		for(i=b;i!=b;i=(i+1)%10)
		{
			if(ht[i]==-1)
			{
				ht[i]=n;
				printf("\nElement %d inserted in %d Bucket ",n,i);
			}
		}
		printf("\nHash Table is full \n");
	}
}
	void display()
	{
		int i;
		printf("\nHash Table \n");
		for(i=0;i<10;i++)
		{
			if(ht[i]==-1)
			{	printf("\nBucket %d=Empty",i);
			}
			else
			{
				printf("\nBucket %d =%d ",i,ht[i]);
			}
		}
	}
	void delete()
	{
		int n,b,i;
		printf("\nEnter Element to Delete");
		scanf("%d",&n);
		b=n%10;
		if(ht[b]==n)
		{
			ht[b]=-1;
			printf("\nElement %d Deleted from %d Bucket ",n,b);
			return ;
		}
		else 
		{

			if(b==9)
				b=-1;
			for(i=b+1;i!=b;i=(i+1)%10)
			{
				if(ht[i]==n)
				{
					ht[i]=-1;
					printf("\nElement %d Deleted from %d Bucket ",n,i);
					return ;
				}
			}
		}
		printf("\nElement is not found in Hash Table");
	}
	void search()
	{
		int n,b,i;
		printf("\nEnter Element to search");
		scanf("%d",&n);
		b=n%10;
		if(ht[b]==n)
		{
			printf("\nElement %d Found at %d Bucket ",n,b);
			return;
		}
		else 
		{

			if(b==9)
				b=-1;
			for(i=b+1;i!=b;i=(i+1)%10)
			{
				if(ht[i]==n)
				{
					
					printf("\nElement %d Found at %d Bucket ",n,i);
					return;
				}
			}
		}
		printf("\nElement is not found ");
	}
	





		
