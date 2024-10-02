#include<stdio.h>
struct node
{
	int data;
	 struct node *left;
	 struct node *right;
};
typedef struct node bst;
bst *init(bst *T)
{
	return(T=NULL);
}
bst *insert(bst *T,int x)
{
	if(T==NULL)
	{
		bst *temp;
		temp=(bst *)malloc(sizeof(bst));
		temp->data=x;
		temp->left=NULL;
		temp->right=NULL;
		return(temp);
	}
	else
	{
		if(x<T->data)
		{
			T->left=insert(T->left,x);
			return(T);
		}
		else if(x>T->data)
			{
			        T->right=insert(T->right,x);
				return(T);
			}
		else
		{
			return(T);
		}
	}
}
bst *search(bst *T,int x)
{
  while(T!=NULL)
    {

	if(x==T->data)
	{
	    return T;
	}
	else if(x<T->data)
	{
		T=T->left;
	}
	else
	{
		T=T->right;
	}
     }
		return(NULL);
    
}
bst *inorder(bst *T)
{
	if(T!=NULL)
	{
		inorder(T->left);
		printf("%d\t",T->data);
		inorder(T->right);
	}
}
bst *preorder(bst *T)
{
	if(T!=NULL)
	{
		printf("%d\t",T->data);
		preorder(T->left);
		preorder(T->right);
	}
}
bst *postorder(bst *T)
{
	if(T!=NULL)
	{
		postorder(T->left);
		postorder(T->right);
		printf("%d\t",T->data);
	}
}
bst *findleaf(bst *T)
{
	if(T!=NULL)
	{if(T->left==NULL && T->right==NULL)
		{
			printf("%d\t",T->data);
			}
			
		findleaf(T->left);
		findleaf(T->right);
	}
		}
int count(bst *T)
{
	if(T==NULL)
	return 0;
	else
	return 1 + count(T->left) + count(T->right);
	}
int countleaf(bst *T)
{
	if(T==NULL)
	return 0;
	if(T->left==NULL && T->right==NULL)
	return 1 ;
	else 
	return countleaf(T->left) + countleaf(T->right);
	}
	
	
	
			

