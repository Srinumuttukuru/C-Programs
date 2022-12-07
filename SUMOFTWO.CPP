#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,sum,*p1,*p2;
clrscr();
cout<<"\n enter a value:";
cin>>a;
cout<<"\n enter b value:";
cin>>b;
p1=&a;
p2=&b;
sum=*p1+*p2;
cout<<"\n sum of a and b is :"<<sum;
getch();
}