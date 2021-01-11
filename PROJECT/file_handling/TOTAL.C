#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5]={4,5,4,5,6},i,t=0;
 clrscr();
 printf("garbage:%d",t);
 //printf("Enter A Five Number:\n");
  for(i=0;i<=4;i++)
   {
    t=t+a[i];
    //printf("\nt=%d",t);
   }
   printf("\n%d",t);
   getch();
}