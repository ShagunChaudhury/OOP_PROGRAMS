#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class players
{
	protected:
	int experience;
	char *type_of_sport;
	public:
	void getdata()
	{
		cout<<"Enter experience of player in years : ";
		cin>>experience;
		cout<<"Enter associated type of sport : ";
		gets(type_of_sport);
	}
};
class zone:public virtual players
{
	protected:
	int zrank;
	public:
	void getzrank()
	{
		cout<<"Enter rank of player in zones : ";
		cin>>zrank;
	}
};
class national:public virtual players
{
	protected:
	int nrank;
	public:
	void getnrank()
	{
		cout<<"Enter rank of players in nationals : ";
		cin>>nrank;
	}
};
class international:public zone,public national
{
	int final_rank;
	public:
	void display()
	{
	final_rank=zrank+nrank;
	cout<<"\nType of sport of player : "<<type_of_sport;
	cout<<"\nExperience of player    : "<<experience<<" years";
	cout<<"\nRank in zones           : "<<zrank;
	cout<<"\nRank in nationals       : "<<nrank;
	cout<<"\nRank in internationals  : "<<final_rank;
	}
};
void main()
{
	clrscr();
	international p1;
	p1.getdata();
	p1.getzrank();
	p1.getnrank();
	p1.display();
	getch();
}

