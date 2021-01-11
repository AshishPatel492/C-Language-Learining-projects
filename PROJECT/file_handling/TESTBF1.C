#include<conio.h>
#include<stdio.h>
struct date
{
 unsigned int dd:5,mm:4,yy;//max 31=11111 in dd is only requied 5bits
}d1;
void main()
{
 clrscr();
 printf("%d",sizeof(d1));
 getch();
}