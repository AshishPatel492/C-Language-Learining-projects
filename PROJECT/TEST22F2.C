#include<stdio.h>
#include<conio.h>
void main()//take something return nothing!
{
 void take(int,int);
 int a,b;
 clrscr();
 printf("Enter two Numbers:");
 scanf("%d%d",&a,&b);
 take(a,b);
 getch();
}
void take(int p, int a)
{
 int c;
 c=p+a;
 printf("\n%d+%d is %d",p,a,c);
}