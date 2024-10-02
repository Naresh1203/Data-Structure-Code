#include<stdio.h>
int insertion(int a[],int s);
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
insertion(a,s);
for(i=0;i<s;i++)
{
	printf("%d\t",a[i]);
}
}
int insertion(int a[],int s)
{
int i,j,temp;
for(i=1;i<s;i++)
{
	temp=a[i];
	j=i-1;
while(j>=0&&a[j]>temp)
{
	a[j+1]=a[j];
	j--;
}
a[j+1]=temp;
}
}
