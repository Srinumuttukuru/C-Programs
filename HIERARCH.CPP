#include<iostream.h>
#include<conio.h>
class classA
{
   private:int rno;
	   char name[25];
   public:void accept();
	  void display();
};
class classA1:public classA
{
   private:char dno[25],st[20],city[20];
   public:void accept();
	  void display();
};
class classA2:public classA
{
   private:int fees;
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
void classA1 ::accept()
{
classA::accept();
cout<<"\n enter door number:";
cin>>dno;
cout<<"\n enter street:";
cin>>st;
cout<<"\n enter city:";
cin>>city;
}
void classA1::display()
{
void classA::display();
cout<<"\n door number="<<dno<<endl;
cout<<"street="<<st<<endl;
cout<<"city="<<endl;
}
void classA2::accept()
{
classA ::accept();
cout<<"course:"
cin>>course;
cout<<"fees:";
cin>>fees;
}
void classA2::display()
{
classA::display();
cout<<"\n Enter coure:"<<course<<endl;
cout<<"\n Enter Fees:"<<fees<<endl;
}
void main()
{
classA1 A1;
clrscr();
A1.accept();
A1.display();
classA2 A2;
A2.accept();
A2.display();
getch();
}