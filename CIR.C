#include<stdio.h>
#include<conio.h>
void main()
{
int b,h;
float area;
clrscr();
printf("\n enter breadth:");
scanf("%d",&b);
printf("\n enter height:");
scanf("%d",&h);
area=0.5*b*h;
printf("\n area of atrigngle=%f",area);
getch();
}