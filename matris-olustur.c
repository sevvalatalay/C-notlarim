#include<stdio.h>
#include<stdlib.h>
#define A 3
#define B 2

void init_tablo(int sevo[A][B])
{
	int i,j;
	printf("%d * %d boyutunda matris giriniz\n",A,B);
	for(i=0;i<A;i++)
	{
		for(j=0;j<B;j++)
		{
			scanf("%d",&sevo[i][j]);
		}
	}
}

void print_tablo(int sevo[A][B])
{
	int i,j;
	printf("tablonuz soyledir\n");
	for(i=0;i<A;i++)
	{
		for(j=0;j<B;j++)
		{
			printf("%4d",sevo[i][j]);
		}
		printf("\n");
	}
}

void hesap (int sevo[A][B], int *max, int *min, int *toplam)
{
	int i,j;
	*max=sevo[0][0];
	*min=sevo[0][0];
	*toplam=0;

	for(i=0;i<A;i++)
	{
		for(j=0;j<B;j++)
		{
			if(sevo[i][j]>*max)
			{
				*max=sevo[i][j];
			}
			if(sevo[i][j]<*min)
			{
				*min=sevo[i][j];
			}
			*toplam=*toplam+sevo[i][j];
		
		}
		printf("\n");
	}
}


int main()
{
	int min,max,toplam;
	int sevo[A][B];
	init_tablo(sevo);
	print_tablo(sevo);
	hesap(sevo,&max,&min,&toplam);
	printf("maksimum %d\nmin %d\ntoplam %d",max,min,toplam);
	return 0;
}
