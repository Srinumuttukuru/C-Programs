#include<stdio.h>
 #include<conio.h>
 void main()
 {
 int a,b,temp;
 clrscr();
 printf("\n enter a and b value:");
 scanf("%d,%d",&a,&b);
 printf("\n before swapping");
 printf("\n a=%d",a);
 printf("\n b=%d",b);
 temp=a;
 a=b;
 b=temp;
 printf("\n after swapping");
 printf("\n a=%d",a);
 printf("\n b=%d",b);
 getch();
 }

