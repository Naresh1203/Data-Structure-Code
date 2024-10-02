#include<stdio.h>
void insertion(int a[],int s);
void main()
{
	int s,i;
	printf("Enter the size of Array");
	scanf("%d",&s);
	int a[s];
	printf("\nEnter the element of Array");
	for(i=0;i<s;i++)
		scanf("%d",&a[i]);
	printf("\nElements are ");
	for(i=0;i<s;i++)
		printf("%d ",a[i]);
	insertion(a,s);
	printf("\nSorted list are ");
	for(i=0;i<s;i++)
		printf("%d ",a[i]);

}
void insertion(int a[],int s)
{
	int i,j,temp;
	for(i=1;i<s;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0&& a[j]>temp)
		{
			a[j+1]=a[j];
				j--;
		}
		a[j+1]=temp;
	}
}

