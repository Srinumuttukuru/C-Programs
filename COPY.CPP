#include<iostream.h>
#include<conio.h>
class line
{
   private:int *ptr,len;
   public:int getLength(void);
   void display(line obj);
   line(int len);
   line(const line &obj);
   ~line();
};
line::line(int len)
{
cout<<" normal constructor allocating pointer"<<endl;
//allocating memory for the ponter
ptr=new int;
*ptr=len;
}
line::line(const line &obj)
{
cout<<"copy constructor allocating pointer"<<endl;
ptr=new int;
*ptr=*obj.ptr;//copying the value
}
line::~line(void)
{
cout<<"freeing memory!"<<endl;
delete ptr;
}
int line::getLength(void)
{
return *ptr;
}
void display(line obj)
{
cout<<"Length of line:"<<obj.getLength()<<endl;
}
int main()
{
line line(10);
clrscr();
display(line);
getch();
return 0;
}