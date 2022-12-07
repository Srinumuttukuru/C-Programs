#include<iostream.h>
#include<conio.h>
class magicbox
{
protected:double width;
};
class smallbox:magicbox
{
    public:void setSmallWidth(double wid);
	   double getSmallWidth(void);
};
double smallbox::getSmallWidth(void)
{
return width;
}
void smallbox::setSmallWidth(double wid)
{
width=wid;
}
void main()
{
smallbox box;
box.setSmallWidth(5.0);
clrscr();
cout<<"\n width of box:"<<box.getSmallWidth();
getch();
}
