#include<conio.h>
#include<stdio.h>
void main()//two dimantion array type
{
 int i;
 char s[3][10];
 clrscr();
 printf("Enter Name:");
 for(i=0;i<2;i++)
  gets(&s[i]);
 for(i=0;i<2;i++)
  puts(s[i]);
 getch();
}