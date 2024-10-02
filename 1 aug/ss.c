#include<stdio.h>
#include<stdlib.h>
int generate(int a[],int s);
int ss(int a[],int s,int n);
int main()
{
	int s,i,n;
	printf("Enter the size of Array\n");
	scanf("%d",&s);
	int a[s];
	generate(a,s);
	for(i=0;i<s;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("Enter the number you want to search");
	scanf("%d",&s);
	ss(a,s,n);
}
int generate(int a[],int s)
{
	int i;
	for(i=0;i<s;i++)
	{
	a[i]=rand()%100;
	}
}
int ss(int a[],int s,int n)
{	int i=0;
	int last=a[n-1];
	a[n-1]=n;
	
	while(a[i]=!n)
	{
		i++;
	}
	a[n-1]=last;
	if((i<n-1)||(n==a[n-1]))
	printf("Number is found");
	else
	printf("Number is not found");
}
	
	
	




	

