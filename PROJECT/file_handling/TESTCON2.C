#include<stdio.h>
#include<conio.h>
void main() //pointer to const
{
 const int x=5; // p=assign ok *p=assign not
 const int *p;
 p=&x;
 printf("x=%d",x);
 //++(*p);
 printf("x=%d",x);
 getch();
}