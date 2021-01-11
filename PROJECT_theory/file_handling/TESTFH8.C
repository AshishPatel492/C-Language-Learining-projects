#include<conio.h>
#include<stdio.h>
struct book
{
 int id;
 char name[20];
 float price;
}b1;
void main()
{
 FILE *fp;
 clrscr();
 fp=fopen("h7.avp","r");//you can use r
 if(fp==NULL)
  {
   printf("File Not Found!");
   getch();
   exit(1);
  }
  fread(&b1,sizeof(b1),1,fp);
  printf("Book id:%d  Book Name:%s  Book Price:%f",b1.id,b1.name,b1.price);
  fclose(fp);
  getch();
}