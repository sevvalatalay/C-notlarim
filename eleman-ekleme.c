#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void ekle(int A[],int sirano, int deger, int elemansayisi)
{
	int i;
	if(sirano<=elemansayisi+1)
	{
		for (i=elemansayisi-1;i>=sirano-1;i--)
		{
			A[i+1]=A[i];
		}
		A[sirano-1]=deger;
		printf("eklenmis hal\n");
		for(i=0;i<=elemansayisi;i++)
		{printf("%d\n",A[i]);
		}
	}
	else
	{printf("hatalisin yeni sira no yaz\n");
	}
}





int main()
{
	int n,i,sirasi,deger;
	printf("dizi kac elemanli olsun\n");
	scanf("%d",&n);
	srand(time(0));
	int dizi[n];
	for(i=0;i<n;i++)
	{
		dizi[i]=rand()%100;
		printf("%d\n",dizi[i]);
	}
	printf("hangi siraya eklencek\n");
	scanf("%d",&sirasi);
	printf("eklenecek sayi ne\n");
	scanf("%d",&deger);
	ekle(dizi,sirasi,deger,n);
}
