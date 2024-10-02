#include<stdio.h>
#include<stdlib.h>
int generate(int a[],int s);
int bs(int a[],int s,int n);
int main()
{
	int s,i,n,a[100];
	printf("Enter the size of Array\n");
	scanf("%d",&s);
	
	printf("Enter the Elements of Array in Ascending order");
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<s;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nEnter the number you want to search=");
	scanf("%d",&n);
	int b=bs(a,s,n);
	if(b==-1)
		printf("Element is not found");
	else
		printf("Element is  found at %d Position",b+1);
}
int bs(int a[],int s,int n)
{
	int l,r,mid;
	l=0;
	r=s-1;
	
	while(l<r)
	{
		mid=(l+r)/2;
		if(n==a[mid])
		{
			return mid;
		}
		else if (n<=a[mid])
		{
			r=mid-1;
		}
		else 
		{
			l=mid+1;
		}

	}
	return -1;
}





#include<stdio.h>
#include<stdlib.h>
int bs(int a[],int l,int r,int n);
int gen(int a[],int s);
int main()
{
    int n,s,i,position;
    printf("Enter the size of array:");
    scanf("%d",&s);
    int a[s];
     gen(a,s);
    printf("\nElement of Array is ");
    for(i=0;i<s;i++)
        printf("%d ",a[i]);
    printf("\nEnter the no. you want to search:");
    scanf("%d",&n);
   
    position=bs(a,0,s-1,n);
    if(position!=0)
    {
        printf("\nNumber %d is found on location %d",n,position+1);
    }
    else
    printf("\nNumber is not found");
    
    
}
int gen(int a[],int s)
{
    int i;
    printf("\nEnter the element in accending order:");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
}
int bs(int a[],int l,int r,int n)
{
    int mid;
    while(l<=r)
    {   mid=(l+r)/2;
        if(n==a[mid])
            return mid;
        if(n<a[mid])
            r=mid-1;
        if(n>a[mid])
            l=mid+1;
    }
}

    
    



	

