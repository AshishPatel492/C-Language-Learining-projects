#include<conio.h>
#include<stdio.h>
void main()
{
    int i,j;
    i=1;
    while(i<=5)
    {
        j=1;
        while(j<=9)
        {
            
            if(j<=6-i||j>=4+i)//
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        j++;
        }
        printf("\n");
        i++;
    }
    getch();
}