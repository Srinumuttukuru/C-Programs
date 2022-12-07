#include<stdio.h>
#include<conio.h>
void main()
{
float f,c;
clrscr();
printf("\n enter centigrad:");
scanf("%f",&c);
f=(c+32)*9/5;
printf("\n enter temperature in fahreheit:%f",f);
getch();
}