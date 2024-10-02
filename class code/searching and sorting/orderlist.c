#include<stdio.h>
int main()
{
    int a[100],i,key,ol,s;
    printf("Enter the size of array: ");
    scanf("%d",&s);
    printf("\nEnter the element of array: ");
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the number you want to search: ");
    scanf("%d",&key);
    printf("\nThe element of array is : ");
    for(i=0;i<s;i++)
    {
       printf("%d ",a[i]);
    }
    ol=orderlist(a,s,key);
    if(ol==-1)
    printf("\nNumber is not found");
    else
    printf("\nNumber is found at position %d",ol+1);
}
int orderlist(int a[],int n,int key)
{
    int last=n-1;
    if(key>last)
    {
        return -1;
    }
        int i=0;
        while(a[i]<key && a[i]!=key)
        i++;
        if(key==a[i])
        {
            return i;
        }
        return -1;
}