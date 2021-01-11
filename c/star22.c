#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,d;
	char c;
	for(i=1;i<=4;i++)
	{
		c='A';
		d=1;
		for(j=1;j<=7;j++)
		{
			if(j>=5-i&&j<=3+i)
			{
				if(j<=4)
				{
					printf("%d",d);
					d++;
				}
				else
				{
					printf("%c",c);
					c++;
				}
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