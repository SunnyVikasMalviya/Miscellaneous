#include<iostream.h>
#include<process.h>
#include<conio.h>
struct node
{
	int info;
	node *next;
}*top,*newptr,*save,*ptr;
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
void main()
{
	clrscr();
	top=NULL;
	int inf;
	char ch,e;
	int c;
	mm:
	cout<<"Main Menu\n 1. Addition\n 2. Deletion\n 3. Display\n 4. Quit\n";
	cin>>c;
	switch(c)
	{
		case 1 :clrscr();
			do
			{
				cout<<"enter number in node:";
				cin>>inf;
				newptr=create_new_node(inf);
				push(newptr);
				cout<<"now the linked stack is:";
				display(top);
				cout<<"press y to enter,n to goto main menu:";
				cin>>ch;
			}while(ch=='y' || ch=='Y');
			goto mm;
		case 2 :clrscr();
			do
			{
				cout<<"the stack is now:";
				display(top);
				cout<<"want to pop an element y/n..";
				cin>>ch;
				if(ch=='y' || ch=='Y');
				pop();
			}while(ch=='y' || ch=='Y');
			goto mm;
		case 3 :clrscr();
			display(top);
			goto mm;
		case 4 :
			cout<<"confirm exit:(y/n)";
			cin>>e;
			if(e=='y'||e=='Y')
			exit(0);
			else
			goto mm;
	      }
}