#include<stdio.h>
#include<conio.h>
int main()
{
   char str[30]="hello this is strset function";
   printf("original string is :%s\n",str);
   printf("Test string 1:%s/n",strset(str,'#'));
   printf("test string 2:%s/n",strset(str,'&'));
   getch();
   return 0;
   }
