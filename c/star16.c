#include<conio.h>
#include<stdio.h>
void main()
{
    int i,j,k,l;
    //clrscr();
    for(i=1;i<=7;i++)
    {
        k=i;
        l=8-i;
        for(j=1;j<=7;j++)
        {
            if(j==l)
            {
                printf("/");
            }
            else if(j==k)
            {
                printf("\\");/* use \\ to print \    */
            }
            else
            {
                printf("*");
            }
            
        }
        printf("\n");
    }
    getch();
}