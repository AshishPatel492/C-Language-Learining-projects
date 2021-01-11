#include<stdio.h>
#include<conio.h>
/*void main()//for looping program
{
 int i;
 char a[6]={'A','S','H','I','S','H'};//{'\0'} used for user input only
 clrscr();
 for(i=0;i<=5;i++)
 {
  printf("%c",a[i]);
 }
 getch();
} */
void main()
{
 int i,j;
 clrscr();
 for(i=0;i<6;i++)
 {
  for(j=0;j<6;j++)
  {
  if(i<=j)
   printf("*");
  else
   printf(" ");
  }
  printf("\n");
 }
 getch();
}