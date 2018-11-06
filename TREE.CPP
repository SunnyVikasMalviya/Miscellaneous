#include<iostream.h>
#include<conio.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node* newNode(int val)
{
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->data=val;
	node->left=NULL;
	node->right=NULL;
	return node;
}
void display(struct node* root)
{
	cout<<root->data<<" ";
	if(root->left!=NULL)
	display(root->left);
	if(root->right!=NULL)
	display(root->right);
}
void main()
{
	clrscr();
	struct node *root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->right=newNode(4);
	display(root);
	getch();
}