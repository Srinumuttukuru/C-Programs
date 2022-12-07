#include<stdio.h>
#include<conio.h>
void main()
{
int rno; float fees;
char name[25],course[20];
clrscr();
printf("\n enter name:");
scanf("%s",name);
printf("\n enter roll number;");
scanf("%d",&rno);
printf("\n enter course:");
scanf("%s",course);
printf("\n enter fees:");
scanf("%f",&fees);
printf("\n *** student details***");
printf("\n student name:%s",name);
printf("\n roll number:%d",rno);
printf("\n course:%s",course);
printf("\n fees:%f",fees);
getch();
}


