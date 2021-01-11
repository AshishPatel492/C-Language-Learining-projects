/*
 (1)automatic : is a default
 (2)register  : Register is a only int and char Allowed
		(for speedup to your program)
 (3)static    : ex1
 (4)external  : ex2
*/
//ex1.,
/* #include<conio.h>
#include<stdio.h>
void f1();
void main()
{
 f1();
 f1();
 getch();
}
void f1()
{
 static int i;
 clrscr();
 i++;
 printf("i=%d\n",i);// i variable is not Destroy,
		    // Destroy in the end of Program
 //getch();
}  */
// ex2.,
#include<conio.h>
#include<stdio.h>
void f1();
void main()
{
 extern int x;//for inform Compiler, not created variable,
	      //becose globle variable use anywhere
 clrscr();
 printf("x=%d",x);
 f1();
 printf("\nx=%d",x);
 getch();
}
int x=5;//globle variable
void f1()
{
 x++;
 printf("\nx=%d",x);
}