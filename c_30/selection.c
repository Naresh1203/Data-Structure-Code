#include<stdio.h>
int selection(int a[],int s);
int main()
{
int a[100],i,s;
printf("Enter The Size of Array :=");
scanf("%d",&s);
printf("Enter the Elements of Array:=");
for(i=0;i<s;i++)
{
	scanf("%d",&a[i]);
}
selection(a,s);
for(i=0;i<s;i++)
{
	printf("%d\t",a[i]);
}
}
int selection(int a[],int s)
{
int i,j,temp;
for(i=0;i<s-1;i++)
{
	int min=i;
	for(j=i+1;j<s;j++)
	{
		if(a[j]<a[min])
		{	min=j;
		}
	}
	if(min!=i)
	{
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
}
}

