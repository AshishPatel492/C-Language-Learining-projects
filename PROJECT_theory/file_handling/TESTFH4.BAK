#include<conio.h>
#include<stdio.h>
void main()      //only reading file program
{
 char ch;
 int i;
 FILE *fp;
 clrscr();
 fp=fopen("fh3.txt","r");//use same location other txt file like h3.txt
 if(fp==NULL)
  {
   printf("File Not Found!");
   getch();
   exit(1);
  }
  ch=fgetc(fp);
  while(!feof(fp))
  {
   printf("%c",ch);
   ch=fgetc(fp);
  }
  fclose(fp);
  getch();
}