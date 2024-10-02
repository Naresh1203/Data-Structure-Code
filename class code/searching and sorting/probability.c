#include<stdio.h>
#include<stdlib.h>
int ps(int a[],int key,int s);
int gen(int a[],int s);
int main()
{
    int key,s,i,position,n;
    printf("Enter the size of array:");
    scanf("%d",&s);
    int a[s];
     gen(a,s);
    printf("\nElement of Array is ");
    for(i=0;i<s;i++)
        printf("%d ",a[i]);
    printf("\nEnter the no. you want to search:");
    scanf("%d",&n);
    key=n;
    position=ps(a,n,s);
    if(position!=-1)
    {
        printf("\nNumber %d is found ",key);
    }
    else
    printf("\nNumber is not found");
    
    
}
int gen(int a[],int s)
{
    int i;
    printf("\nEnter the number :");
    printf("Enter the element in accending order:");
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);
}
int ps(int a[],int key,int s)
{int i,temp;
for(i=0;i<s;i++)
  {  if(a[i]==key)
    {
        if(i!=0)
        {
            temp=a[i];
            a[i]=a[i-1];
            a[i-1]=temp;
        }
        return i;
    }
    
}
return -1;
}


    

    
    