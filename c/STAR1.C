#include<conio.h>
#include<stdio.h>
void main()
{
 int i,j;
 //clrscr();
 for(i=1;i<=5;i++)
  {
   for(j=1;j<=5;j++)//this is simplify program to lern loop & Anderstanding condition in a program//
    {
     if(j<=i)
      printf("*");
     else
      printf(" ");
    }
    printf("\n");
  }
  getch();
}