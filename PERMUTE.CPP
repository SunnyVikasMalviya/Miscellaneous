#include<iostream.h>
#include<conio.h>
#include<string.h>
void swap(char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
	//Swapping Using bitwise and operators.
	//(*x ^= *y), (*y ^= *x), (*x ^= *y);
}
void permute(char *str, int l, int r)
{
	if(l == r)
	{
		cout<<str<<endl;
	}
	else
	{
		for(int i=l;i<=r;i++)
		{
			swap((str+l), (str+i));  //Swapping
			permute(str, l+1, r);  //Recursion
			swap((str+l), (str+i));  //Backtrack
		}
	}
}
//Driver Function
void main()
{
	char str[] = "ABC";
	int n = strlen(str);
	clrscr();
	permute(str, 0, n-1);
	getch();
}

