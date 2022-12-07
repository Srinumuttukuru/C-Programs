#include<iostream.h>
#include<conio.h>
class mtable
{
   private:int n;
   public:mtable(int x);
   void display();
};
mtable::mtable(int x)
{
       n=x;
}
void mtable::display()
{
for(int i=1;i<=10;i++)
{
cout<<n<<"*"<<i<<"="<<n*i<<endl;
}
}
void main()
{
int n;
clrscr();
cout<<"enter n value to print table:";
cin>>n;
mtable ob(n);
ob.display();
getch();
}
