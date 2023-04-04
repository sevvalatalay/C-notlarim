#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int enkucuk( int B[], int tane)
{
	int j,enk;
	enk=B[0];
	
	for (j=1;j<tane;j++)
	{
		if(B[j]<enk)
		{
			enk=B[j];
		}
	}
	return enk;
}


int enbuyuk ( int B[], int tane)
{
	int j,enb;
	enb=B[0];
	
	for (j=1;j<tane;j++)
	{
		if(B[j]>enb)
		{
			enb=B[j];
		}
	}
	return enb;
}





int main()
{
	int n,i;
	printf("kac elemanli olsun\n");
	scanf("%d",&n);
	int dizi[n];
	srand(time(0));
	printf("dizi elemanlari\n");
	
	for (i=0;i<n;i++)
	{
		dizi[i]=rand()%100;
		printf("%d\n",dizi[i]);
	}
	printf("en buyuk %d",enbuyuk(dizi,n));
	printf("en kucuk %d",enkucuk(dizi,n));
	
}
