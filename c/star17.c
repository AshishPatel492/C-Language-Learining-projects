#include<conio.h>
#include<stdio.h>
void main()
{
    int i,j,k;
    //clrscr();
    for(i=1;i<=9;i++)
    {
        i<=5?k=i:k--;
        for(j=1;j<=9;j++)
        {
            if(j<=6-k || j>=4+k)
             printf("*");
            else
             printf(" ");
        }
        printf("\n");
    }
    getch();
}