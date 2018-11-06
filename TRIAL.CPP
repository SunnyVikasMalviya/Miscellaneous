#include<iostream.h>
#include<conio.h>
void main()
{
	int x,i,cnt;
	clrscr();
	cin>>x;
	for(i=1;i<=x;i++)
	{
		while(i!=0)
		{
			cnt=cnt+(i&1);
			i=i>>1;
		}
	}
	cout<<cnt;
	getch();
}