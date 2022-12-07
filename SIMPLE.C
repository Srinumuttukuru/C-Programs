#include<stdio.h>
#include<conio.h>
void main()
{
int emid,sal;
char name[25];
clrscr();
printf("\n enter employee name:");
scanf("%s",name);
printf("\n employee id:");
scanf("%d",&emid);
printf("|n enter salary:");
scanf("%d",sal);
if(sal>=10000)
{
printf("\n bonus=rs1000");
}
getch();
}