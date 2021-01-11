#include<stdio.h>
#include<conio.h>
void main()
{
 int choice,a,b,s;
 clrscr();
 while(1)//switch case program
 {
  printf("\n1.Addition");
  printf("\n2.Odd-Even");
  printf("\n3.N Natural");
  printf("\n4.Exit\n");
  scanf("%d",&choice);
  switch(choice)
   {
    case 1:
	  printf("Enter Two Numbers:");
	  scanf("%d %d",&a,&b);
	  s=a+b;
	  printf("\nSum is %d",s);
	  break;
    case 2:
	  printf("\nEnter A Number:\n");
	  scanf("%d",&a);
	  if(a%2==0)
	   printf("\nEven Number");
	  else
	   printf("\nOdd Number");
	   break;
    case 3:
	  printf("Enter a number:");
	  scanf("%d",&a);
	  for(b=1;b<=a;b++)
	    printf("%d",b);
	    break;
    case 4:
	  exit(0);
    default:
	  printf("Invalied Choice");
   }
   getch();
   }
 }
