#include<iostream.h>
#include<conio.h>
void main()
{
	int n,k=1;
	clrscr();
	cin>>n;
	for(int i=1;i<n;i++)
	{
	for(int j=0;j<k;j=j+7-i)
	{
		cout<<i+j<<"  ";
	}
		k++;
		cout<<"\n";
	}
	getch();
}