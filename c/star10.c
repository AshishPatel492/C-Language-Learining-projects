#include<conio.h>
#include<stdio.h>
void main()
{
    int i,j,k=0;
    for(i=1;i<=7;i++)
    {
        i<=4?k++:k--;
        for(j=1;j<=7;j++)
        {
            //if(j>=5-i&&j<=3+i&&j>=i-3&&j<=11-i) 
            if(j>=5-k&&j<=3+k) 
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