#include<stdio.h>
int od(int a[],int s,int key);
void main()
{	int s,i,key,orderlist;
	printf("Enter the size of Array");
	scanf("%d",&s);
	int a[s];
	printf("\nEnter the element in Array: ");//Elements should be sequential.
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nElements are :");
	for(i=0;i<s;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nEnter the element you want to search:");
	scanf("%d",&key);
	orderlist=od(a,s,key);
	if(orderlist== -1)
	{
		printf("\nNumber is not found");
	}
	else
		printf("\nNumber is found at position %d",orderlist+1);

}
int od(int a[],int s,int key)
{
	int i,last;
	last=s-1;
	if(a[last]<key)
		return -1;
	i=0;
	while(a[i]<key && a[i]!=key)
		i++;
	if(a[i]==key)
		return i;
	return -1;
}


