#include<stdio.h>
#include<stdlib.h>
#include"binary.h"
void main()
{
	int n,x;
	bst *T,*P;
	T=init(T);
	

	do{
		printf("\n1.Insert 2.Search 3.Inorder 4.Preorder 5.Postorder 6.Exit");
		printf("\nEnter Your choise:");
		scanf("%d",&n);
		switch(n)
		{
			case 1:printf("\nEnter the number:");
			       scanf("%d",&x);
				T=insert(T,x);
				break;
			case 2:printf("\nEnter the number you want to search:");
			       scanf("%d",&x);
			       P=search(T,x);
			       if(P==NULL)
			       {
				       printf("%d is not found",x);
			       }
			       else
			       {
				       printf("%d is found",x);
			       }
			       break;
			case 3:inorder(T);
			       printf("\n");
			       break;
			case 4:preorder(T);
			       printf("\n");
			       break;
			case 5:postorder(T);
			       printf("\n");
			       break;
			}
	}while(n!=6);
}

