#include<conio.h>
#include<stdio.h>
void main()
{
    int i,j,d;
    for(i=1;i<=4;i++)
    {
        d=i;
        for(j=1;j<=7;j++)
        {
            if (j>=5-i&&j<=3+i)
            {     
                printf("%d",d);                
                j<=3?d++:d--;
            }
            else
            {
                printf(" ");
            }           
        }
        printf("\n");
    }
    getch();
}