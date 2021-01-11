#include<conio.h>
#include<stdio.h>
struct book
{
 int i;
 char t[10];
 float p;
};
struct book input()
{
 struct book b1;
 printf("Enter Book Details:");
 scanf("%d",&b1.i);
 fflush(stdin);
 gets(b1.t);
 scanf("%f",&b1.p);
 return(b1);
}
int display(struct book b3)
{
 printf("\n%d \n%s \n%f",b3.i,b3.t,b3.p);
 return 0;
}
void main()
{
 struct book b2;
 clrscr();
 b2=input();
 display(b2);
 getch();
}