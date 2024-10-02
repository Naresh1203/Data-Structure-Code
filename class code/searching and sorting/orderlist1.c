#include<stdio.h>
#include<stdlib.h>
int ord(int a[],int s,int key);
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
    position= ord(a,s,key);
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
int ord(int a[],int s,int key)
{
    int last,i=0;
    last=s-1;
    if(key>a[last])
        return -1;
    while(a[i]<key && key!=a[i])
        i++;
    if(a[i]==key)
        return i;
}


    

    
    