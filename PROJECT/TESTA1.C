#include<conio.h>
#include<stdio.h>
void main()
{
 int x[10],i,sum=0;
 clrscr();
 printf("Enter 10 Numbers:");
  for(i=0;i<=9;i++)
   {
    scanf("%d",&x[i]);
    sum=sum+x[i];
    //printf("\nsum%d is %d\n",x[i],sum);
   }
   printf("\n\n\n%f",sum);
 getch();
}