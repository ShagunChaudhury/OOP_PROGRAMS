#include<iostream.h>
#include<conio.h>
class A
{
int a;
public:
int b;
void getdata()
{
cout<<"Enter values of X and Y \n";
cin>>a>>b;
}
void showdata()
{
cout<<"Entered values are \n";
cout<<"X = "<<a<<endl<<"Y = "<<b<<endl;
}
};
class B : private A
{
public:
void showval()
{
cout<<"Members of class A inherited privately in class B\n";
getdata();
showdata();
}
};
void main()
{
clrscr();
B b;
b.showval();
getch();
}

