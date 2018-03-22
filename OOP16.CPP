#include<iostream.h>
#include<conio.h>
class A
{
int a;
public:
A()
{
a=0;
cout<<"constructor of class A is invoked \n";
}
~A()
{
cout<<"destructor of class A is invoked\n";
}
};
class B:public A
{
int b;
public:
B()
{
b=0;
cout<<"constructor of class B is invoked\n";
}
~B()
{
cout<<"destructor of class B is invoked \n";
}
};
class C:public B
{
int c;
public:
C()
{
c=0;
cout<<"constructor of class C is invoked \n";
}
~C()
{
cout<<"destructor of class C is invoked \n";
}
};
void main()
{
clrscr();
{
C c1;
}
getch();
}