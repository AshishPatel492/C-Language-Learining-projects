#include<conio.h>
#include<stdio.h>
void main()
{
    int i,j,d;
    for(i=1;i<=9;i++)
    {
        //d=i;
        for(j=1;j<=5;j++)
        {
            if(j>=6-i&&j>=i-4)
            {
                d=j;
                printf("%d",d);
                i>=5?d++:d--;  
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