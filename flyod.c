#include<stdio.h>
void creategraph(int arr[10][10],int n)
{
     int i,j;
     for(i=1;i<=n;i++)
     {
          for(j=1;j<=n;j++)
          {
               printf("Enter edge[%d-%d] : ",i,j);
               scanf("%d",&arr[i][j]);
               if(arr[i][j]==0)
               {
                    arr[i][j]=1000;
               }     
          }
     }
}
void display(int arr[10][10],int n)
{
     int i,j;
     for(i=1;i<=n;i++)
     {
          for(j=1;j<n;j++)
          {
                printf("%d\t",arr[i][j]);
          }              
      }
          printf("\n");
}                      
void floyd(int arr[10][10],int n)
{
     int i,j,k;
     for(k=0;k<=n;k++)
     {
          for(i=0;i<=n;i++)
          {
               for(j=0;j<=n;j++)
               {
                    if(arr[i][k] +arr[k][j] < arr[i][j])
                    {
                         arr[i][j]=arr[i][k] + arr[j][k];
                    }
               }
          }
     }
}     
     int main()
     {
          int arr[10][10];
          int n;
          
          printf("enter total no of vertices");
          scanf("%d",&n);
          
          creategraph(arr,n);
          display(arr,n);
          
          printf("Floyd :\n");
          floyd(arr,n);
          display(arr,n);
          return 0;
     }                                        
