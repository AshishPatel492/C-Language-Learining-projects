#include<stdio.h>
#include<conio.h>
struct book
{
 int id;
 char name[20];
 float price;
}b1;
void main()
{
 //struct book b1;
 FILE *fp;
 clrscr();
 fp=fopen("h7.avp","wb");
 printf("Enter Id Title Price:");
 scanf("%d",&b1.id);
 fflush(stdin);
 gets(b1.name);
 scanf("%f",&b1.price);
 //fflush(stdin);
 fwrite(&b1,sizeof(b1),1,fp);
 fclose(fp);
 getch();
}
