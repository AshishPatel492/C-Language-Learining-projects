#include<stdio.h>
#include<conio.h>
main(int argc,char * argv[])
{
 int i;
 clrscr();
 for(i=0;i<argc;i++)
 {
  printf("\n%s",argv[i]);
 }
 getch();
}