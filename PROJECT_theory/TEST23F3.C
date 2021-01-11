#include<conio.h>
#include<stdio.h>
void main()//take nothing return something
{
 int ritu(void);
 int a;
 clrscr();
 a=ritu();
 //printf(retu());//whithout variable
 printf("multi is %d",a);
 getch();
}
int ritu(void)
{
 int a,b,c;
 printf("Enter two Numbers:");
 scanf("%d%d",&a,&b);
 c=a*b;
 printf("%d+%d",a,b);
 return c;//use like(c)
}