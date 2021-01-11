#include<conio.h>
#include<stdio.h>
void main()
{
 void swap(int *,int *);
 int a,b;
 clrscr();
 printf("Enter two Numbers:");
 scanf("%d%d",&a,&b);
 printf("before swaping:a=%d b=%d",a,b);
 swap(&a,&b);
 printf("\nAfter swap:a=%d b=%d",a,b);
 getch();
}
void swap(int *x,int *y)
{
 int z;
 z=*x;
 *x=*y;
 *y=z;
}