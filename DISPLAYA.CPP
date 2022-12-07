#include<iostream.h>
#include<conio.h>
void main()
{
int a=100,*p1;
char b='a',*p2;
float c=2.25,*p3;
clrscr();
p1=&a;
p2=&b;
p3=&c;
cout<<"\n value of a="<<*p1<<endl;
cout<<"\n value of b="<<p2<<endl;
cout<<"\n value of c="<<p3<<endl;
cout<<"\n address of a="<<p1<<endl;
cout<<"\n address of b="<<p2<<endl;
cout<<"\n address of c="<<p3<<endl;
getch();
}