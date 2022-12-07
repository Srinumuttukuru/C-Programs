#include<iostream.h>
#include<conio.h>
class fid
{
   private:int a,b,c;
   public:fib();
	  void change();
	  void display();
};
 fib::fib()
{
      a=0;
      b=1;
      c=a+b;
}
void fib::change()
{
	a=b;
	b=c;
	c=a+b;
}
void fib::display()
{
cout<<a<<endl;
}
void main()
{
fid obj;
int i,n;
clrscr();
cout<<"enter limit to rint fibonacci series:";
cin>>n;
for(i=1;i<=n;i++)
{
obj.display();
obj.change();
}
getch();
}
