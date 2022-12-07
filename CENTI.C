#include<stdio.h>
#include<conio.h>
void main()
{
float c,f;
clrscr();
printf("\n enter fahrenheit:");
scanf("%f",&f);
c=(f-32)*5/9;
printf("\n centigrade=%f",c);
getch();
}
