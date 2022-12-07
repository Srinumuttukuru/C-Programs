#include<stdio.h>
#include<conio.h>
void main()
{
int wd;
clrscr();
printf("\n enter weekday number:");
scanf("%d",&wd);
switch(wd)
{
case 0:printf("\n sunday");
      break;
case 1:printf("\n monday");
      break;
case 2:printf("\n tuesday");
      break;
case 3:printf("\n wednesday");
      break;
case 4:printf("\n thursday");
      break;
case 5:printf("\n friday");
      break;
case 6:printf("\n saturday");
      break;
default:printf("\n invaild choice");
}
getch();
}