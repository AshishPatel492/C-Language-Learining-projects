#include<stdio.h>
#include<conio.h>
int main()
{
 int i;
 FILE *fp;
 char name[20];
 clrscr();
 fp=fopen("H3.txt","w");
  if(fp==NULL)
  {
   printf("File Not Open!");
   exit(1);
  }
  printf("Enter Your String:");
  gets(name);
 for(i=0;i<strlen(name);i++)
 {
   fputc(name[i],fp);
 }
  // getch();
   fclose(fp);
   getch();
}