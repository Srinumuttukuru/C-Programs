#include<stdio.h>
#include<conio.h>
void main()
{
int apno;
char nm[15],gr[15],br[15];
clrscr();
printf("\n enter application number:");
scanf("%d",&apno);
printf("\n enter name:");
scanf("%s",nm);
printf("\n enter group:");
scanf("%s",gr);
printf("\n Enter branch:");
scanf("%s",br);
if(strcmp(gr,"bsc")==0)
 {
 if(strcmp(br,"mecs")==0)
 printf("\n fees=10000");
 else
 if(strcmp(br,"mpcs")==0)
 printf("\n fees=9000");
 else
 if(strcmp(gr,"mscs")==0)
 printf("\n fees=8000");
 }
else
 printf("\n no such group");
 if(strcmp(gr,"bcom")==0)
 {
 if(strcmp(br,"bcomp")==0)
 printf("\n fees=8500");
else
 if(strcmp(br,"gbcom")==0)
 printf("\n fees=7500");
 }
/*else
 printf("\n sorry-no such group--:"); */

//printf("\n no such group");
getch();
}
