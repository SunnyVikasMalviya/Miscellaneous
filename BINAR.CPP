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
		cin>>s.rollno;
		cout<<"Name:";
		gets(s.name);
		cout<<"Class:";
		gets(s.std);
		cout<<"Marks:";
		cin>>s.marks;
		if(s.marks>=75)
		s.grade='A';
		else if(s.marks>=60)
		s.grade='B';
		else if(s.marks>=40)
		s.grade='C';
		else if(s.marks>=30)
		s.grade='D';
		else
		s.grade='E';
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
	{
		for(int j=0;j<s.nor;j++)
		{
			fsrch>>s.rollno;
			if(rno==s.rollno)
			{
				fsrch.get(s.name,25);
				fsrch.get(s.std,4);
				fsrch>>s.marks;
				fsrch>>s.grade;
				cout<<"\nName:"<<s.name;
				cout<<"\nClass:"<<s.std;
				cout<<"\nMarks:"<<s.marks<<"\tGrade:"<<s.grade;
			}
			else
			{
				cout<<"\nSORRY!\tThe roll number you entered doesnot exist.";
			}
		}
	}while(!fsrch.eof())
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
		fdisp.get(s.name,25);
		fdisp.get(s.std,4);
		fdisp>>s.marks;
		fdisp>>s.rollno;
		fdisp>>s.grade;
		cout<<"\nRoll Number:"<<s.rollno;
		cout<<"\nStudent Name:"<<s.name;
		cout<<"\nClass:"<<s.std;
		cout<<"\nMarks:"<<s.marks<<"\tGrade:"<<s.grade;
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
	cout<<"\n\n\tMAIN MENU\n\t1.ADD\n\t2.SEARCH	\n\t3.DISPLAY\n\t4.QUIT\n";
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