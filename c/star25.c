#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,k,d;
	for(i=1;i<=21;i++)
	{
		i<=11?k++:k--;
		for(j=1;j<=21;j++)
		{
			if(j>=12-k&&j<11+k)
			{
			  if(i==11||i==21||j==11||j==21)
			  {
				d=0;
			    printf("%d",d);	
			    j<=10?d=j:d--;
			  }
			  else
			   printf("1"); 
			}
			else
			 printf(" ");
		}
		printf("\n");
	}
	getch();
}