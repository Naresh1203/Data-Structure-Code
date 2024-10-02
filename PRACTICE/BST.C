#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *left;
    int data;
    struct node *right;
};
typedef node bst;

bst *init(bst *T)
{
    return(T=NULL);
}

bst *insert(bst *T,int x)
{
    if(T==NULL)
    {
        bst *temp=(bst *)malloc(sizeof(bst));
        temp->left=NULL;
        temp->data=x;
        temp->right=NULL;
        return(temp);
    }
    else
    {
        if(x<T->data)
        {
            T->left=insert(T->left,x);
            return T;
        }
        else if(x>T->data)
        {
            T->right=insert(T->right,x);
            return T;
        }
        else
        {
            return T;
            
        }
    }
}


int main()
{
int ch,x;
bst *T,*P;
do
{
    printf("\n0.Exit 1.Insert 2.Search 3.Traversal \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("\nEnter the no.:");
        scanf("%d",&x);
        T=insert(T,x);
        break;
        case 2:printf("\nEnter the no. You want to search:");
        scanf("%d",&x);
        P=Search(T,x);
        if(P==NULL)
        {
            printf("No. is not found %d",x);
        }
        else
            printf("No is found %d",x);
        break;
        case 3:printf("\n1.Inorder 2.Preorder 3.Postorder\n");
                scanf("%d",&ch);
                switch(ch)
                {
                    case 1:inorder(T);
                    break;
                    case 2:preorder(T);
                    break;
                    case 3:postorder(T);
                    break;
                }
        
    }
 }while(n!=0);
}