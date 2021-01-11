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
		for(j=1;j<=8;j++)
		{
			if(j>=5-i&&j<=4+i)
			{
				if(j<=4)
				{
					printf("%c",c);
					c++;
				}
				else
				{
					printf("%d",d);
					d++;
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