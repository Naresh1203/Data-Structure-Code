#include<stdio.h>
#include<stdlib.h>
int generate(int a[],int s);
int ls(int a[],int s,int n);
int main()
{
	int s,i,n;
	printf("Enter the size of Array\n");
	scanf("%d",&s);
	int a[s];
	printf("Enter The Number which you want to search ");
	scanf("%d",&n);
	generate(a,s);
	for(i=0;i<s;i++)
	{
		printf("%d\t",a[i]);
	}
	ls(a,s,n);
	return 0;
}
int generate(int a[],int s)
{
	int i;
	for(i=0;i<s;i++)
	{
	a[i]=rand()%10;
	}
}
int ls(int a[],int s,int n)
{
	int i,flag=0,pos;
	for(i=0;i<s;i++)
	{
		if(n==a[i])
		{
			flag=flag+1;
			pos=i;
		}
	}
	if(flag==1)
	{
		printf("\nNumber is found at Position %d",pos);
	}
	else
		printf("\nNumber is Not found");
}



	

