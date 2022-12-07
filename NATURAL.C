#include<stdio.h>
#include<conio.h>
void main()
{
int n,r;
clrscr(),
printf("\n enter a number:");
scanf("%d",&n);
r=n%2;
if(r==0)
printf("\n %d is even number",n);
else
printf("\n %d is odd number",n);
getch();
}