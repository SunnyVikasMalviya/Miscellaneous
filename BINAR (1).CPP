#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<process.h>
#include<stdio.h>
struct student
{
	int rollno,nor;                //nor=no. of records
	char name[25],std[4],grade;
	float marks;
}s;
student *s1=new student[s.nor];
void add()
{
	s.nor=0;
	clrscr();
	ofstream fadd;
	fadd.open("STUDENT.TXT",ios::out|ios::app);
	cout<<"How many records do you want to enter:";
	cin>>s.nor;
	for(int i=0;i<s.nor;i++)           //loop to enter details in a file
	{
		cout<<"Roll number:";
		cin>>s1[i].rollno;
		cout<<"Name:";
		gets(s1[i].name);
		cout<<"Class:";
		gets(s1[i].std);
		cout<<"Marks:";
		cin>>s1[i].marks;
		if(s1[i].marks>=75)
		s1[i].grade='A';
		else if(s1[i].marks>=60)
		s1[i].grade='B';
		else if(s1[i].marks>=40)
		s1[i].grade='C';
		else if(s1[i].marks>=30)
		s1[i].grade='D';
		else
		s1[i].grade='E';
	}
	fadd.close();
}
void search()
{
	int rno,pos;
	ifstream fsrch;
	fsrch.open("STUDENT.TXT",ios::in);
	sagain:
	cout<<"\nEnter roll number to be searched:";
	cin>>rno;
	for(int j=0;j<s.nor;j++)
	{
		fsrch>>s1[j].rollno;
		if(rno==s1[j].rollno)
		{
			fsrch.get(s1[j].name,25);
			fsrch.get(s1[j].std,4);
			fsrch>>s1[j].marks;
			fsrch>>s1[j].grade;
			cout<<"\nName:";
			cout.write(s1[j].name,25).put('\n');
			cout<<"Class:"<<s1[j].std;
			cout.write(s1[j].std,4).put('\n');
			cout<<"Marks:"<<s1[j].marks<<"\tGrade:"<<s1[j].grade;
			goto found;
		}
	}
	cout<<"\nSORRY!\tThe roll number you entered doesnot exist.";
	found:
	fsrch.close();
}
void display()
{
	clrscr();
	ifstream fdisp;
	fdisp.open("STUDENT.TXT",ios::in);
	fdisp.seekg(0);
	cout<<"\n";
	for(int k=0;k<s.nor;k++)
	{
		fdisp.get(s1[k].name,25);
		fdisp.get(s1[k].std,4);
		fdisp>>s1[k].marks;
		fdisp>>s1[k].rollno;
		fdisp>>s1[k].grade;
		cout<<"\nRoll Number:"<<s1[k].rollno;
		cout<<"\nStudent Name:";
		cout.write(s1[k].name,25).put('\n');
		cout<<"Class:";
		cout.write(s1[k].std,4).put('\n');
		cout<<"Marks:"<<s1[k].marks<<"\tGrade:"<<s1[k].grade;
	}
	fdisp.close();
}
void main()
{
	int mm;
	char q;
	clrscr();
	cout<<"\n\n**PROGRAM TO ADD, SEARCH AND DISPLAY DATA IN/FROM A FILE**\n";
	again:
	cout<<"\n\n\tMAIN MENU\n\t1.ADD\n\t2.SEARCH\n\t3.DISPLAY\n\t4.QUIT\n";
	cin>>mm;
	switch(mm)
	{
		case 1 : add();
			 goto again;

		case 2 : search();
			 goto again;

		case 3 : display();
			 goto again;

		case 4 : cout<<"\nAre you sure you want to quit(y/n):";
			 cin>>q;
			 if(q=='y' || q=='Y')
			 {
				exit(0);
			 }
			 else
			 {
				goto again;
			 }
	}
	getch();
}