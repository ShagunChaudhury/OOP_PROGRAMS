#include<iostream.h>
#include<conio.h>
class test
{
	protected:
	int rollno;
	int marks;
	public:
	void getdata()
	{
		cout<<"Enter Rollno of student : ";
		cin>>rollno;
		cout<<"Enter marks in test : ";
		cin>>marks;
	}
	void show()
	{
	cout<<"Roll number = "<<rollno<<endl;
	cout<<"Marks in test = "<<marks<<endl;
	}
};
class sports
{
	protected:
	int marks1;
	public:
	void getmarks()
	{
		cout<<"Enter marks in sports : ";
		cin>>marks1;
	}
	void show1()
	{
	cout<<"performance in sports = "<<marks1<<endl;
	}
};
class result:public test,public sports
{
	int total_marks;
	public:
	void show_all()
	{
	total_marks=marks+marks1;
	show();
	show1();
	cout<<"Result = "<<total_marks;
	}
};
void main()
{
	clrscr();
	result s1;
	s1.getdata();
	s1.getmarks();
	s1.show_all();
	getch();
}

