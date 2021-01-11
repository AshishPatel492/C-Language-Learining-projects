#include<conio.h>
#include<stdio.h>
void main()
{
 int i,j,k;
// clrscr();
 for(i=1;i<=5;i++)
  {
   k=1;// k is use for toggle k==1 print * and k==0 print space
   for(j=1;j<=9;j++)
    {
     if(j>=6-i&&j<=4+i&&k==1)
      {
	     printf("*");
	     k=0;
      }
     else
     {
      printf(" ");
      k=1;
     }
    }
    printf("\n");
  }
  getch();
}