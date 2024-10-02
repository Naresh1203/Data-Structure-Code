#include<stdio.h>
int bubble(int a[],int s);
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
bubble(a,s);
for(i=0;i<s;i++)
{
	printf("%d\t",a[i]);
}
}
int bubble(int a[],int s)
{
int i,j,temp;
for(i=0;i<s-1;i++)
{
for(j=0;j<s-1;j++)
{
	if(a[j]>a[j+1])
		{
	temp=a[j];
	a[j]=a[j+1];
	a[j+1]=temp;
		}
	}
}}
