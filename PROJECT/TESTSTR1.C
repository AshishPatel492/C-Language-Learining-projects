#include<stdio.h>
#include<conio.h>
struct date
{
 int dd,mm,yy;
}/*d1 to use here globle variable*/;
void main()
{
 struct date today;
 clrscr();
 today.dd=26;
 today.mm=06;
 today.yy=1992;
 printf("%d/%d/%d",today);
 getch();
}