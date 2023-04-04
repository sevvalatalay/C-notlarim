#include<stdio.h>
#include<stdlib.h>

main()
{
	int i,j;
	int dizi[10][10];
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(i==j)
			{ 
			   dizi[i][j]=1;
			}
			else
			{ dizi[i][j]=0;
			}
		}
	}
	
	
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf(" %d",dizi[i][j]);
		}
		
		printf("\n");
	}
	
	
}
