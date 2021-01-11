//user input
/*#include<conio.h>
#include<stdio.h>
void main()
{
    int i,j,k,u;
    printf("Enter Number:\n");
    scanf("%d",&u);
    for(i=1;i<=u;i++)
    {
        if (u%2==0)
        {
            if(i<=u/2)
             k++;
            if(i>u/2+1)
             k--;
        }
        else
        {
         i<=(u+1)/2?k++:k--;
        }
        for(j=1;j<=(u+1)/2;j++)
        {
            if(j<=k)
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
}*/

//to use without scanf "user input"

#include<conio.h>
#include<stdio.h>
void main()
{
    int i,j,k;//,u;
    //printf("Enter Number:\n");
    //scanf("%d",&u);
    for(i=1;i<=7;i++)
    {
         i<=4?k++:k--;
        for(j=1;j<=4;j++)
        {
            if(j<=k)
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
