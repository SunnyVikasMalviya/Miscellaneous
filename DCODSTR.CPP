#include<iostream.h>
#include<conio.h>
#include<string.h>
char str[20];
int loop(int no,int j1)
{
	int i;
	for(i=0;i<no;i++)
	{
		for(int j=j1;j<strlen(str);j++)
		{
			if(str[j]=='[')
				continue;
			else if(str[j]>48 && str[j]<=57)
			{
				j++;
				loop(str[j],j);
			}
			else if(str[j]==']')
				break;
			else
				cout<<str[j];
		}
	}
	return 0;
}
void main()
{
	clrscr();
	cin>>str;
	loop(str[0],1);
	getch();
}