#include<iostream.h>
#include<conio.h>
class A
{
int x;
public:
int y;
void getdata()
{
cout<<"Enter values of X and Y \n";
cin>>x>>y;
}
void showdata()
{
cout<<"Entered values are \n";
cout<<"X = "<<x<<endl<<"Y = "<<y<<endl;
}
};
class B : public A
{
int z;
public:
void getval()
{
cout<<"Enter value of Z \n";
cin>>z;
}
void showval()
{
cout<<"Z = "<<z<<endl;
}
};
void main()
{
clrscr();
B b;
cout<<"Members of class A derived publicly in class B \n";
b.getdata();
b.showdata();
cout<<"Own member of class B \n";
b.getval();
b.showval();
getch();
}

