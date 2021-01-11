#include<conio.h>
#include<stdio.h>
void main()
{
 int x=5,*j;
 clrscr();
 j=&x;
 printf("%d %u \n",x,j);//print x value and j value j value is x block address
 printf("%d %u\n",*j,&x);//print x block value throug pointer j and print x address value
 printf("%u",*&j);//print pointer x block address throug j pointer
 printf("\n%u",&j);//print j block address
 getch();
}