#include<stdio.h>
int cnt=0;
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
bst *copy(bst *T)  
{	if(T == NULL) 
   	return T; 
	else
{	
 
   bst *temp = (bst *)malloc(sizeof(bst)) ; 
   temp->data = T-> data;     
   temp->left = copy(T -> left); 
   temp->right = copy(T-> right);  
   return temp;
}
}
int compare(bst *T,bst *T2)
{
	if(T==NULL && T2==NULL)
		return 1;
	else if(T==NULL || T2==NULL)
		return 0;
	else
	{
		if(T->data == T2->data && compare(T->left,T2->left) && compare(T->right,T2->right))
			return 1;
		else
			return 0;
	}
}
int tree_height(bst *T)
{
if(T==NULL)
	return 0;
else
{
int left_height=tree_height(T->left);
int right_height=tree_height(T->right);
	if(left_height>=right_height)
		return left_height+1;
	else 
		return right_height+1;
}
}

void print_level(bst *T,int level_no)
{ 
	if(T==NULL)
		return  ;
	if(level_no==0)
	{
		printf("%d->",T->data);
		cnt++;
	}
	else
	{
		print_level(T->left,level_no-1);
		print_level(T->right,level_no-1);
		
	}
}
void print_tree_level_order(bst *T)
{
	int i;
	if(T==NULL)
		return ;
	int  height=tree_height(T);
	printf("Total no. of levels in tree=%d\n",height);
	for(i=0;i<height;i++)
	{
		printf("Level %d: ",i);
		print_level(T,i);
		printf("\t%d",cnt);
		cnt=0;
		printf("\n");
	}
}



	
	
	
			

