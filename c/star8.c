#include<conio.h>
#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        k=1;
        for(j=1;j<=7;j++)
        {
            if (j>=5-i&&j<=i+3)
            {
                printf("%d",k);
                j<=3?k++:k--;
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