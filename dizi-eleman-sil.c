#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void sil ( int A[],int sira,int eleman)

{
	int i;
	if (sira>=eleman+1)
	{
		printf("\ngecerli sira girin");
	}
	else
	{
		for (i=sira-1;i<eleman-1;i++)
		{
			A[i]=A[i+1];
		}
		
		printf("yenidizi\n");
		for(i=0;i<eleman-1;i++)
		{
			printf("%d\n",A[i]);
		}
	}
}

int main()
{
	int n,i,sirano;
	printf("kac tane sayi\n");
	scanf("%d",&n);
	int dizi[n];
	srand(time(0));
	for(i=0;i<n;i++)
	{
		dizi[i]=rand()%100;
		printf("%d\n",dizi[i]);
	}
	
	printf("\nhangi deger silinsin?\n");
	scanf("%d",&sirano);
	sil(dizi,sirano,n);
}
