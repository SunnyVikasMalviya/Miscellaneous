#include<stdio.h>
#include<conio.h>
void find(int n)
{
int a=n;
int num =0;
while(a>0)
{
num=(num*10)+a%10;
a=a/10;
}
if(num==n)
printf("%d",num);
else
find(n+1);
}
void main()
{
int t,arr[5],i;
clrscr();
scanf("%d",&t);
for(i=0;i<t;i++)
scanf("%d",&arr[i]);
for(i=0;i<t;i++)
find(arr[i]+1);
getch();
}
