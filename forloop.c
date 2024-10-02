#include<stdio.h>
int factorial(int n);
void main()
{
	int num,f;
	printf("Enter the number:");
	scanf("%d",&num);
	f=factorial(num);
	printf("\nResult:%d",f);
}
int factorial(int n)
{
	int i,result=1;
	for(i=1;i<=n;i++)
	{
		result=result*i;

	}
	return result;
}




