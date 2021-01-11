#include<conio.h>
#include<stdio.h>
void main() //Applied BREAK Program
{
 int i=1,x;
 clrscr();
 while(i<=5)
 {
  printf("Enter a Number:");
  scanf("%d",&x);
  if(x>0)
    break;
  i++;
 }
 i==6?printf("End Normally"):printf("Applied Break");
 getch();

}