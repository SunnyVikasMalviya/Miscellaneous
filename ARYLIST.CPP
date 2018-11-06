#include<iostream.h>
#include<conio.h>
int arr[10];
static int size=0;
void ins()
{
	int e,op,pos;
	cout<<"\nEnter Element:";
	cin>>e;
	if(size==0)
	{
		arr[size]=e;
		size++;
	}
	else
	{
		cout<<"Enter place to insert element(1.Start,2.End,3.Specific position):";
		cin>>op;
		switch(op)
		{
			case 1: size++;
				for(int i=size-1;i>0;i--)
				{
					arr[i]=arr[i-1];
				}
				arr[0]=e;
				break;
			case 2: size++;
				arr[size-1]=e;
				break;
			case 3: size++;
				cout<<"Enter Position(<"<<size<<"):";
				cin>>pos;
				for(i=size-1;i>pos-1;i--)
				{
					arr[i]=arr[i-1];
				}
				arr[pos-1]=e;
				break;
		}
	}
	cout<<"\nElement "<<e<<" inserted.\n";
}
void del()
{
	int e,pos,op,i,val;
	if(size==1)
	{
		size--;
		cout<<"\nElement deleted.\n";
	}
	else if(size==0)
	{
		cout<<"Underflow.\n";
	}
	else
	{
		cout<<"Delete Element by(1.Position,2.Value(In case of 2 same values, first occurance of the value will be deleted)):";
		cin>>op;
		switch(op)
		{
			case 1: int op1;
				cout<<"Enter Position(1.Start,2.End,3.Specific position):";
				cin>>op1;
				switch(op1)
				{
					case 1: for(i=0;i<size-1;i++)
						arr[i]=arr[i+1];
						size--;
						break;
					case 2: arr[size]=0;
						size--;
						break;
					case 3: cout<<"Enter position:";
						cin>>pos;
						int flag=0;
						for(i=0;i<size;i++)
						{
							if(i+1==pos)
							{
								flag=1;
								break;
							}
						}
						if(flag==1)
						{
							for(;i<size;i++)
							{
								arr[i]=arr[i+1];
							}
							size--;
							cout<<"\nElement deleted.";
						}
						else
						{
							cout<<"\nElement not found.";
						}						}
						break;
			case 2: cout<<"Enter value:";
				cin>>val;
				int flag=0;
				for(i=0;i<size;i++)
				{
					if(arr[i]==val)
					{
						flag=1;
						break;
					}
				}
				if(flag==1)
				{
					for(;i<size;i++)
					{
						arr[i]=arr[i+1];
					}
					size--;
					cout<<"\nElement deleted.";
				}
				else
				{
					cout<<"\nElement not found.";
				}
				break;
		}
	}
}
void tra()
{
	if(size==0)
	{
		cout<<"Array not Initialized yet.";
	}
	else
	{
		for(int i=0;i<size;i++)
		cout<<arr[i]<<"\t";
	}
	cout<<"\n";
}
void main()
{
	int op;
	char ch='y';
	clrscr();
	while(ch=='y' || ch=='Y')
	{
		cout<<"\nMain Menu\n1.Enter Element  2.Delete Element  3.Traverse Element(s):";
		cin>>op;
		switch(op)
		{
			case 1: ins();
				break;
			case 2: del();
				break;
			case 3: tra();
				break;
			default:cout<<"Invalid Choice.\n";
		}
		cout<<"Want to continue(y/n):";
		cin>>ch;
	}
	getch();
}