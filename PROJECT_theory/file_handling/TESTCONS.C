#include<conio.h>
#include<stdio.h>
void main()
{
 const int x=5;
 int *p;
 clrscr();
 p=&x;
 printf("x=%d",x);
  ++(*p);
 printf("x=%d",x);
 getch();
}