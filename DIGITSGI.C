#include<stdio.h>
#include<conio.h>
void main()
{
   int n,s=0,t;
   clrscr();
   printf("\n enter n value");
   scanf("%d",&n);
   while(n!=0)
   {
   t=n%10;
   s=s+t;
   n=n/10;
   }
   printf("\n sum=%d",s);
   getch();
   }