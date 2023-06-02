#include<stdio.h>
#include<stdlib.h>
#define SEVO 10
int main()
{
	int i,max,min;
	int dizi[SEVO];
	printf("lutfen %d tane deger giriniz\n",SEVO);
	for(i=0;i<SEVO;i++)
	{
		scanf("%d",&dizi[i]);
	}
	max=min=dizi[0];
	for ( i=1;i<SEVO;i++)
	{
		if( dizi[i]>max)
		{
			max=dizi[i];
		}
		
		if( dizi[i]<min)
		{
			min=dizi[i];
		}
	}
	
	printf("min %d\nmax %d",min,max);
	
	return 0;
}
