#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j;
	int dizi1[3][4]={{1,2,3,4},{1,2,2,4},{1,2,3,7}};
	int dizi2[3][4]={{1,2,4,4},{1,2,3,4},{1,7,6,1}};
	int toplam[3][4];
	
	
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{ 
		    toplam[i][j] = dizi1[i][j] + dizi2[i][j];
		}
		
		
	}
	
	
	for (i=0;i<3;i++)
	{
		for (j=0;j<4;j++)
		{ 
		   printf(" %d",toplam[i][j]);
		}
		
		printf("\n");
	}


	
}
