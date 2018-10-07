#include<iostream.h>
#include<conio.h>
#include<process.h>
struct node
{
	int no;
	node *next;
}*top,*newptr,*ptr,*save;
node *createnode(int n)
{
	ptr=new node;
	ptr->no=n;
	ptr->next=NULL;
	return ptr;
}
void add(node *np)
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
void display(node *np)
{
	while(np!=NULL)
	{
		cout<<np->no<<"->";
		np=np->next;
	}
	cout<<"!\n";
}
void del()
{
	if(top==NULL)
	cout<<"UNDERFLOW!";
	else
	{	ptr=top;
		top=top->next;
		delete ptr;
	}
}
void main()
{
	int n,ch;
	char c,qu;
	top=NULL;
	clrscr();
	cout<<"\n\n**PROGRAM TO ENTER,DELETE AND DISPLAY A QUEUE**\n";
	mm:
	cout<<"\nMAIN MENU\n1.ADD\n2.DELETE\n3.DISPLAY\n4.QUIT\n";
	cin>>ch;
	switch(ch)
	{
		case 1 :clrscr();
			do
			{
				cout<<"Enter number in the node:";
				cin>>n;
				newptr=createnode(n);
				add(newptr);
				cout<<"Node:";
				display(top);
				cout<<"Enter more numbers?:";
				cin>>c;
			}while(c=='y'||c=='Y');
			goto mm;

		case 2 :clrscr();
			do
			{
				cout<<"Node:";
				display(top);
				cout<<"Want to delete a number:";
				cin>>c;
				if(c=='y'||c=='Y')
				del();
			}while(c=='y'||c=='Y');
			goto mm;

		case 3 :display(top);
			goto mm;

		case 4 :cout<<"\nWANT TO QUIT?:";
			cin>>qu;
			if(qu=='y'||qu=='Y')
			{
				exit(0);
			}
			else
			goto mm;
	}
	getch();
}