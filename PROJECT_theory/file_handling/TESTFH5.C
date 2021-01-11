#include<conio.h>
#include<stdio.h>
void main()
{
 char str[10];
 FILE *fp;
 clrscr();
 fp=fopen("h3.txt","r");
 if(fp==NULL)
  {
   printf("File Note Found!");
   getch();
   exit(1);
  }
  while(fgets(str,9,fp)!=NULL)
  {
   printf("%s",str);
  }
  fclose(fp);
  getch();
}