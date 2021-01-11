//use #Define
#include<stdio.h>
#include<conio.h>
#define pi 3.14
#define msg "Hello"
void main()
{
 int r;
 float a;
 clrscr();
 printf("Enter Radius a Circle:");
 scanf("%d",&r);
 a=pi*r*r;
 printf("%s \nArea of circle is %f",msg,a);
 getch();
}
