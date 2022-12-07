#include<stdio.h>
#include<conio.h>
void main()
{
float si,p,t,r;
clrscr();
printf("\n enter principle amount:");
scanf("%f",&p);
printf("\n enter time:");
scanf("%f",&t);
printf("\n enter rate of intrest:"),
scanf("%f",&r);
si=p*t*r/100;
printf("\n simple in trest=%f,si");
getch();
}