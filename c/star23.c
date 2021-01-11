#include<conio.h>
#include<stdio.h>
void main()
{
 int i,j,k;
 //clrscr();
 for(i=1;i<=6;i++)
  {
    k=1;
   for(j=1;j<=6;j++)//this is simplify program to lern loop & Anderstanding condition in a program//
    {
     if(j<=i)
     {
      if(k==1)
      {
        printf("%d",k);
        k=0;
      }
      else
      {
        printf("%d",k);
        k=1;
      }
     }
     else
      printf(" ");
    }
    printf("\n");
  }
  getch();
}