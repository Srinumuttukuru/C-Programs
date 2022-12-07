#include<stdio.h>
#include<conio.h>
void main()
{
   int n,r=0,t,x;
   printf("\n enter n value");
   scanf("%d",&n);
   x=n;
   while(n!=0);
   {t=n%=0;
   r=(r*10)+t;
   n=n/10;
   }
   if(x---r)
   printf("\n palindrome");
   else
   printf("\n not palindrome");
   }
