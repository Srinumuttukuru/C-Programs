#include<stdio.h>
#include<conio.h>
void main()
{
int rno,m1,m2,m3,tot;
char name[25];
float avg;
clrscr();
printf("\n enter name:");
scanf("%s" ,name);
printf("\n enter roll number:");
scanf("%d",&rno);
printf("\n enter markes in 3 subjects:");
scanf("%d%d%d",&m1,&m2,&m3);
tot=m1+m2+m3;
avg=tot/3;
printf("\n name=%s", name);
printf("\n roll number=%d",rno);
printf("\n enter markes in 3 subjects:%d%d%d",&m1,&m2,&m3);
printf("\n enter totel markes=%d",tot);
printf("\n enter average markes=%S",avg);
if(m1>=35&&m2>=35&&m3>=35&&avg>=75)
printf("\n grade=distinction");
else
if(m1>=35&&m2>=35&&m3>=35&&avg>=60&&avg>=75);
printf("\n grade first class");

if(m1>=35&&m2>=35&&m3>=35&&avg>+50&&avg<60);
printf("\n grade=second class");

if(m1>35&&m2>35&&m3>=35&&avg>=35&&avg<50);
printf("\n grade=third class");

printf("\n results=fail");
getch();
}