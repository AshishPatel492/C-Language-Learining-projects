#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5];
 clrscr();
 input(a);
 display(a);
 Short(a);
 printf("After Swaping\n");
 display(a);
 getch();
}
int input(int *i)
{
 int j;
 printf("Enter A Five Number:");
 for(j=0;j<=4;j++)
 {
  scanf("%d",i+j);
 }
 return 0;
}
int display(int *p)
{
 int i;
 for(i=0;i<=4;i++)
  printf("\n%d",p[i]);
 return 0;
}
int Short(int *q)
{
 int i,round,t;
 for(round=1;round<=4;round++)
 {
  for(i=0;i<=4-round;i++)
  {
   if(*(q+i)>*(q+i+1))
    {
     t=*(q+i);
     *(q+i)=*(q+i+1);
     *(q+i+1)=t;
    }
  }
 }
 return 0;
}