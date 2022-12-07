#include<iostream.h>
#include<conio.h>
class sums
{
public:sums(int a,int b);
       sums(float x,float y);
};
sums::sums(int a,int b)
{
cout<<"a value="<<a<<endl;
cout<<"b value="<<b<<endl;
cout<<"sum of a and b="<<a+b<<endl;
}
sums::sums(float x,float y)
{
cout<<"x value="<<x<<endl;
cout<<"y value="<<y<<endl;
cout<<"sum of x and y:"<<x+y<<endl;
}
void main()
{
int a,b;
float x,y;
clrscr();
cout<<"enter two integers:";
cin>>a>>b;
sums obj1(a,b);
cout<<"enter two float values:";
cin>>x>>y;
sums obj2(x,y);
getch();
}
