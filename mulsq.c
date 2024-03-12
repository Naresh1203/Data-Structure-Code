#include<stdio.h>
#include<stdlib.h>
void init();
void insert();
void display();
void delete();
void search();
int ht[10];

void main()
{
      int n;
      init();
      while(1)
      {
            printf("\n**menu**\n");
            printf("\n1.init \n2.insert \n3.display \n4.delete \n5.search \n6.exit\n");
            printf("enter your choice=");
            scanf("%d",&n);
            switch(n)
            {
                  /* case 1:init();
                         break;*/
                  case 2:insert();
                         break;
                  case 3:display();
                         break;
                  case 4:delete();
                         break;
                  case 5:search();
                         break;
                  case 6:exit(0);
                  default:printf("\n invalid choice\n");
                        exit(0);
            }
      }
}
void init()
{
      int i;
      for(i=0;i<10;i++)
            ht[i]=-1;
}
void insert()
{
      int n,b,i,s,r,len=0,posn,s1;
      printf("\nenter elements to insert =\n");
      scanf("%d",&n);
s=n*n;
s1=s;
while(s!=0)
{
	len++;
	s=s/10;
}
if(len%2==0)
	posn=(len/2);
	else
	posn=(len/2)+1;
	for(i=0;i<posn;i++)
{
	s1=s1/10;
}
if(len==2)
	b=0;
	else
	b=s1%10;

   
      if(ht[b]==-1)
      {
            ht[b]=n;
            printf("\n elements %d inserted in %d bucket",n,b);
            return;
      }
     
   else
      {
            if(b==9)
                  b=-1;
            for(i=b+1;i!=b;i=(i+1)%10)
            {
                  if(ht[i]==-1)
                  {
                        ht[i]=n;
                        printf("\n element %d inseted in %d bucket",n,i);
                         return;
                  }
            }
}
printf("\n hash table is full \n");
      }
void display()
{
      int i;
      printf("\n hash table\n");
      for(i=0;i<10;i++)
      {
            if(ht[i]==-1)
            {
                  printf("\n bucket %d empty",i);
            }
            else 
            {
                  printf("\n bucket %d = %d",i,ht[i]);
            }
      }
}
void delete()
{
      int n,i,b;
      printf("\n enter elements to delete=");
      scanf("%d",&n);
      
      s=n*n;
s1=s;
while(s!=0)
{
	len++;
	s=s/10;
}
if(len%2==0)
	posn=(len/2);
	else
	posn=(len/2)+1;
	for(i=0;i<posn;i++)
{
	s1=s1/10;
}
if(len==2)
	b=0;
	else
	b=s1%10;

      if(ht[b]==n)
      {
            ht[b]=-1;
            printf(" elements %d deleted from %d bucket",n,b);
            return;
      }
      else
      {
            if(b==9)
                  b=-1;
            for(i=b+1;i!=b;i=(i+1)%10)
            {
                  if(ht[i]==n)
                  {
                        printf("\n elements %d deleted from  %d bucket" ,n,i);
                        return;
                  }
            }
      }
      printf("\n element not found");
}
void search()
{
      int n,b,i;
      printf("\nenter the elements to be search=");
      scanf("%d",&n);
      
      s=n*n;
s1=s;
while(s!=0)
{
	len++;
	s=s/10;
}
if(len%2==0)
	posn=(len/2);
	else
	posn=(len/2)+1;
	for(i=0;i<posn;i++)
{
	s1=s1/10;
}
if(len==2)
	b=0;
	else
	b=s1%10;

      if(ht[b]==n)
      {
            printf("\n elements %d found at %d bucket",n,b);
            return;
      }
      else 
      {
            if(b==9)
                  b=-1;
            for(i=b+1;i!=b;i=(i+1)%10)
            {
                  if(ht[i]==n)
                  {
                        printf("\n elements %d found at %d bucket",n,i);
                        return;
                  }
            }
      }
      printf("\nelements is not found");
}

