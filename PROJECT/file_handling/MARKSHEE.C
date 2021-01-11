#include<conio.h>
#include<stdio.h>
void main()
{
 //while(0)
 {
  int a[7],i,j,t=0;
  clrscr();
  printf("Enter Subject Marks:\n");
  for(i=0;i<=6;i++)
   {
    scanf("%d",&a[i]);
   }
  //printf("Number is Here You Entered:\n");
   for(i=0;i<=6;i++)
    {
     if(a[i]<33)
      {
       j=0;
      }
     t=t+a[i];
    }
    if(j==0)
     {
      printf("fail");
     }
    else
     {
      printf("pass");
     }
  printf("\nTotal:%d",t);
  getch();
 }
 //exit(1);
}
