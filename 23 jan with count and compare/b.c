#include<stdio.h>
#include<stdlib.h>
#include "bst.h"
void main()
{
	int n,x;
	bst *T,*P,*T2;
	int i;

	T=init(T);
	T2=init(T2);

	do{
		printf("\n1.Insert\n2.search\n3.inorder\n4.preorder\n.5postorder.\n6.exit \n7.findleaf\n8.count\n9.countleaf\n10.Compare \n11.Copy tree");
		printf("Enter the choice");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("ENter the element\n");
				scanf("%d",&x);
				T=insert(T,x);
				T2=insert(T2,x+5);
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
			case 10:compare(T,T2);
				inorder(T2);
				if(compare(T,T2))
					printf("Trees are equal");
				else
					printf("Trees are not equal");
				break;

			case 11:
				T2=copy(T);
				inorder(T2);
				break;			}
					
	}while(n!=6);
}

