#include<iostream.h>
#include<conio.h>
class classA
{
   private:int rno;
	  char name[25];
   public:void accept();
	  void display();
};
class classB
{
   private:char dno[25],st[25],city[20];
   public:void accept();
	  void display();
};
class classC :public classA
{
   private:int fees;
	  char course[25];
   public:void accept();
	  void display();
};
class classD:public classC, classB
{
   private:int dd,mm,yy;
	   char course[25];
   public:void accept();
	  void display();
};
void classA::accept()
{
cout<<"\n enter roll number:";
cin>>rno;
cout<<"\n enter name:";
cin>>name;
}
void classA::display()
{
cout<<"\n roll number="<<rno<<endl;
cout<<"name="<<name<<endl;
}
void classB::accept()
{
cout<<"enter door number:";
cin>>dno;
cout<<"\n enter street:";
cin>>st;
cout<<"\n enter city:";
cin>>city;
}
void classB::display()
{
cout<<"\n door number="<<dno<<endl;
cout<<"street="<<st<<endl;
cout<<"city"<<endl;
}
void classC::accept()
{
classA::accept();
cout<<"\n enter course:";
cin>>course;
cout<<"\n enter fees:";
cin>>fees;
}
void classC::display()
{
classA::display();
cout<<"course:"<<course<<endl;
cout<<"fees:"<<fees;
}
void classD::accept()
{
classB::accept();
classC::accept();
cout<<"\n enter birth day:";
cin>>dd;
cout<<"\n enter birth month:";
cin>>mm;
cout<<"\n enter birth year:";
cin>>yy;
}
void classD::display()
{
classB::display();
classC::display();
cout<<"\n birth date:"<<dd;
cout<<"\n birth month:"<<mm;
cout<<"\n birth year:"<<yy;
}
void main()
{
classD ob;
clrscr();
ob.accept();
ob.display();
getch();
}