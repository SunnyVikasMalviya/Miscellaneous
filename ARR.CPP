#include<iostream.h>
#include<stdlib.h>
#include<process.h>
#include<conio.h>
struct node
{
	int info;
	node *next;
}*top,*newptr,*save,*ptr;
node *create_new_node(int);
void push(node*);
void display(node*);
void pop();
int main()
{
	clrscr();
	top=NULL;
	int inf;
	char ch='y',e;
	int c;
	mm:
	cout<<"Main Menu\n 1. Addition\n 2. Deletion\n 3. Display\n 4. Quit\n";
	cin>>c;
	switch(c)
	{
		case 1 :
			while(ch=='y' || ch=='Y')
			{
				cout<<"enter info for new node: ";
				cin>>inf;
				newptr=create_new_node(inf);
				if(newptr==NULL)
				{
					cout<<"cant create new node";
					exit(1);
				}
				push(newptr);
				cout<<"now the linked stack is:";
				display(top);
				cout<<"press y to enter , n to exit:";
				cin>>ch;
			}
		case 2 :
			clrscr();
			do
			{
				cout<<"the stack is now:";
				display(top);
				cout<<"want to pop an element y/n..";
				cin>>ch;
				if(ch=='y' || ch=='Y');
				pop();
			}while(ch=='y' || ch=='Y');
		case 3 :
			display(top);
		case 4 :
			cout<<"confirm exit:(y/n)";
			cin>>e;
			if(e=='y'||e=='Y')
			{
				exit(0);
			}
			else
			goto mm;
	      }
	return 0;
}
node *create_new_node(int n)
{
	ptr=new node;
	ptr->info=n;
	ptr->next=NULL;
	return ptr;
}
void push(node*np)
{
	if(top==NULL)
	top=np;
	else
	{
		save=top;
		top=np;
		np->next=save;
	}
}
void pop()
{
	if(top==NULL)
	cout<<"UNDERFLOW!!!\n";
	else
	{
		ptr=top;
		top=top->next;
		delete ptr;
	}
}
void display(node* np)
{
	while(np!=NULL)
	{
		cout<<np->info<<"-> ";
		np=np->next;
	}
	cout<<"!!!\n";
}
