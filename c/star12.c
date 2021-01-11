#include<conio.h>
#include<stdio.h>
void main()
{
    int i,j;//u;
    //printf("Enter Number:\n");
    //scanf("%d",&u);
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=7;j++)
        {
            if(j>=i&&j<=8-i)
            {
                printf("*");
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