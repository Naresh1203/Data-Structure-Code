#include<stdio.h>
#include<stdlib.h>
#include "bst.h"
void main()
{
	int n,x;
	bst *T,*P;
	int i;

	T=init(T);

	do{
		printf("\n1.Insert\n2.search\n3.inorder\n4.preorder\n.5postorder.\n6.exit \n7.findleaf\n8.count\n9.countleaf\n");
		printf("Enter the choice");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("ENter the element\n");
				scanf("%d",&x);
				T=insert(T,x);
				break;
			case 2:
				printf("enter element to search\n");
				scanf("%d",&x);
				P=search(T,x);
				if(P==NULL)
				{
					printf("\nELement not found");
				}
				else
				{
					printf(" \nFOUND");
				}
				break;
			case 3:
				inorder(T);
			        printf("\n");
			       break;
			case 4: 
			       preorder(T);
			       printf("\n");
			       break;
			case 5:
			       postorder(T);
			       printf("\n");
			       break;
			case 7:
				findleaf(T);
				printf("\n");
				break;
			case 8:
				i=count(T);
				printf("%d",i);
				printf("\n");
				break;
			case 9:
				i=countleaf(T);
					printf("%d",i);
					printf("\n");
					break;	
					}
	}while(n!=6);
}

