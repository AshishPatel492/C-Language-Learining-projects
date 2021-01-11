#include<conio.h>
#include<stdio.h>
union items //to see difrens replase union to struct then run
{
 int x;
 float y;
 char z;
};
void main()
{
 union items i1;
 clrscr();
 i1.x=5;
 printf("%d",i1.x);
 i1.y=3.5;
 printf("\n%f",i1.y);
 i1.z='a';
 printf("\n%c",i1.z);
 printf("\n%d",sizeof(i1));
 getch();
}