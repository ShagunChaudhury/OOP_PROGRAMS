#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

class Grandparent 
{  
  public : char nameF[25];
             int ageF;
             char nameM[25];
             int ageM;
            void Enter()
           { cout<<"\nEnter the name of the  father:\t";
             gets(nameF);
             cout<<"\nEnter the name of the  mother:\t";
             gets(nameM);
             cout<<"\nEnter their age:\nFather:\t";
             cin>>ageF;
             cout<<"\nMother:\t";
             cin>>ageM;
           }  
		   void show_G()
		   { 
		     puts(nameF);
		     cout<<endl;
		     puts(nameM);
		     cout<<endl<<ageF<<endl<<ageM;
		   }             
};

class Father : virtual public Grandparent
{ 
      public : void Enter_F()
         { cout<<"\nEnter the name of the  father:\t";
             gets(nameF);
			 cout<<"\nEnter age:\nFather:\t";
             cin>>ageF;
         }
           void show_F()
           {  puts(nameF);
		     cout<<endl;
		    
		     cout<<endl<<ageF;
		   }
};

class Mother : virtual public Grandparent
{ public : void Enter_M()
          {  cout<<"\nEnter the name of the  mother:\t";
             gets(nameM);
             cout<<"\nEnter age:\nMother:\t";
             cin>>ageM;
          }
           void show_M()
           { 
		     puts(nameM);
		     cout<<endl<<ageM;
		   }
};
class Child : public Father,public Mother
{ protected: char name[25];
             int age;
  public: void Enter_values()
          { Enter_G();
            Enter_F();
            Enter_M();
		    cout<<"\nEnter the name of the child:\t";
            gets(name);
            cout<<"\nEnter the age of the child:\t";
            cin>>age;
				}		
		  void show_values()
		  { cout<<"\nThe values you have entered for the child's Grand Parent are:\t";
		    show_G();
		    cout<<"\nThe values you have entered for the child's Parent are:\t";
		    show_F();
		    show_M();
		    cout<<"\nThe values you have entered for the child are:\t";
		    puts(name);
		    cout<<endl<<age;
		  }			  
};

int main()
{ Child C;
  C.Enter_values();
  C.show_values();
  return 0;
}
