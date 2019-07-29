#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node
{
int data;
struct node *left;
struct node *right;
};
struct node *root;
struct node *insert(struct node *root,int value)
{
   struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
      if(root==NULL)
	    {
	   root=newnode;
	  newnode->left=NULL;
	   newnode->right=NULL;
	   }
  else
   {
      if(newnode->data<root->data)
      {
       root->left=insert(root->left,value);
      }
    else
     {

      root->right=insert(root->right,value);
     }

   }
   return (root);
   }
    void postorder(struct node *root)
    {
    if(root==NULL)
      return(0);
      postorder(root->left);
      postorder(root->right);
      printf("%d",root->data);

      }
       void inorder(struct node *root)
    {
    if(root==NULL)
       return (0);
      inorder(root->left);
      printf("%d",root->data);
      inorder(root->right);

      }
	  void preorder(struct node *root)
    {
    if(root==NULL)
      return(0);
	printf("%d",root->data);
      preorder(root->left);

      preorder(root->right);

      }

      int main()
      {
      int ch,value;
      do
      {
      printf("\n 1.insert\n 2.postorder\n 3.inorder\n 4.preorder\n 5.exit");
      printf("\n Enter your choice");
      scanf("%d",&ch);
      switch(ch)
      {
      case 1:
	 printf("\n enter the value of node");
	 scanf("%d",&value);
	 root=insert(root,value);
	 break;
      case 2:
	{
	printf("\n postorder traversal");
	postorder(root);
	}
	break;
      case 3:
		{
	printf("\n inorder traversal");
	inorder(root);
	}
	break;
	 case 4:
		{
	printf("\n preorder traversal");
	preorder(root);
	}
	break;
	case 5:
	 exit(0);
	 break;
	 default:
	 printf("\n Enter the valid choice");
	 break;
	 }
	 }while(1);

	 }

