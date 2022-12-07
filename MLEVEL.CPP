#include<iostream.h>
#include<conio.h>
class gbase
{
   private:int rno;
	   char name[25];
   public:void accept();
	  void display();
};
class base: public gbase
{
   private:char dno[25],st[20],city[20];
   public:void accept();
	  void display();
};
class child:public base
{
      private:int fees;
	      char course[25];
      public:void accept();
	     void display();
};
void gbase::accept()
{
cout<<"enter roll number:";
cin>>rno;
cout<<"\n enter name:";
cin>>name;
}
void gbase::display()
{
cout<<"\n Enter Roll Number:"<<rno<<endl;
cout<<"name:"<<name;
}
void base::accept()
{
gbase::accept();
cout<<"\n enter door number:";
cin>>dno;
cout<<"\n enter street:";
cin>>st;
cout<<"\n enter city:";
cin>>city;
}
void base::display()
{
gbase::display();
cout<<"door number="<<dno<<endl;
cout<<"street="<<st<<endl;
cout<<"city="<<city<<endl;
}
void child::accept()
{
base::accept();
cout<<"\n enter course:";
cin>>course;
cout<<"\n enter fees:";
cin>>fees;
}
void child::display()
{
base::display();
cout<<"course:"<<course<<endl;
cout<<"fees:"<<fees;
}
void main()
{
child ob;
clrscr();
ob.accept();
ob.display();
getch();
}

