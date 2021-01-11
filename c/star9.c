#include<conio.h>
#include<stdio.h>
void main()
{
    int i,j;
    char a;
    for(i=1;i<=4;i++)
    {
        a='A';
        for(j=1;j<=7;j++)
        {
            if(j<=5-i||j>=3+i)
            {
                printf("%c",a);
                j<4?a++:a--;
            }
            else
            {
              printf(" ");
              if(j==4)
               {
                   a--;
               }
            }
        }
        printf("\n");
    }
    getch();
}