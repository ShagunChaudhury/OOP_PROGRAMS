#include<iostream.h>
#include<conio.h>
class A;
class B
{
int price;
public:
void getp()
{
cout<<"Enter the price of item-1 ";
cin>>price;
}
void showp()
{
cout<<"Price of item-1 = "<<price<<endl;
}
void friend sum(B,A);
};
class A
{
int money;
public:
void getm()
{
cout<<"Enter the price of item-2 ";
cin>>money;
}
void showm()
{
cout<<"Price of item-2 = "<<money<<endl;
}
void friend sum(B,A);
};
void sum(B b,A a)
{
int sum;
sum=b.price+a.money;
cout<<"sum of price of item-1 and item-2 = "<<sum;
}
void main()
{
clrscr();
A a1;
B b1;
b1.getp();
b1.showp();
a1.getm();
a1.showm();
sum(b1,a1);
getch();
}


