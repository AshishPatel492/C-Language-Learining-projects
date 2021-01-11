#include<stdio.h>
#include<conio.h>
void main()//take something return something
{
 int a,b;
 clrscr();
 printf("Enter a Numbers:");
 scanf("%d%d",&a,&b);
 printf("%d",takeandreturn(a,b));
 getch();
}
int takeandreturn(int aa,int bb)
{
 int c;
 c=aa+bb;
 return c;
}