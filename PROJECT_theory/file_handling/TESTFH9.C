#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *fp;
 int a,b;
 clrscr();
 fp=fopen("h9.txt","w");
 printf("Enter Two Numbers:");
 scanf("%d %d",&a,&b);
 /*if(fp==NULL)
  {
   printf("File Not Found!");
   getch();
   exit(1);
  }*/
 fprintf(fp,"Sum is:%d+%d=%d",a,b,a+b);
 fclose(fp);
 getch();
}