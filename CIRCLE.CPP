#include<iostream.h>
#include<conio.h>
class circle
{
   private:double r;
   public: void input();
	   void area();
	   void circum();
   };
   int main()
   {
      clrscr();
      circle c;
      c.input();
      c.area();
      c.circum();
getch();
return 0;
}
void circle::input()
{
   cout<<"enter radius of a circle:";
   cin>>r;
   }
void circle:: area()
{
double ar=3.14*r*r;
cout<<"\n area of a circle="<<ar;
}
void circle::circum()
{
double cir=2*3.14*r;
cout<<"\n circumference is:"<<cir;
}