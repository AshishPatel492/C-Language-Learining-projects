#include<stdio.h>
#include<conio.h>
typedef struct student//not compalsary you can use any
{
 int rollno;
 char name[20];
 int age;
}std;
void main()
{
 std sd;
 clrscr();
 printf("Enter Student Details:");
 scanf("%d",&sd.rollno);
 scanf("%s",&sd.name);
// fflush(stdin);
 scanf("%d",&sd.age);
// fflush(stdin);
 printf("%d %s %d",sd.rollno,sd.name,sd.age);
 getch();
}