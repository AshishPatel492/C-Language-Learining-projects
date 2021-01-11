#include<conio.h>
#include<stdio.h>
struct data
{
 char name[20];
 int dd,mm,yy;
};
struct data input()
{
 struct data di;
 printf("Enter Name or BirthDate:");
 gets(di.name);
 scanf("%d/%d/%d",&di.dd,&di.mm,&di.yy);
 return di;
}
void main()
{
 struct data dod;
 clrscr();
 dod=input();
 puts(dod.name);
 printf("%d/%d/%d",dod.dd,dod.mm,dod.yy);
 getch();
}