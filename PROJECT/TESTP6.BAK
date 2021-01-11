#include<conio.h>
#include<stdio.h>
int length(char *a)
{
 int i;
 for(i=0;*(a+i)!='\0';i++);
  return(i);
}
char *reverse(char *p)
{
 int l,i;
 char t;
 for(l=0;*(p+l)!='\0';l++)
  {
   for(i=0;i<l/2;i++)
   {
    t=*(p+i);
    *(p+i)=*(p+l-1-i);
    *(p+l-1-i)=t;
   }
  }
  return(p);
}
void main()
{
 clrscr();
 printf("%d",length("Computer"));
 printf("\n%s",reverse("Computer"));
 getch();
}