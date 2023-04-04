#include<stdio.h>
#include<stdlib.h>
#define kitapvergi 4.0
#define temelvergi 5.6
#define luksvergi 19.6
#define kitap 0
#define temel 1
#define luks 2
int main()
{
	int kod;
	float fiyat;
	printf("lutfen fiyat ve urun kodunuz\n");
	scanf("%f %d",&fiyat,&kod);
	
	switch (kod)
	{
		case kitap : printf("fiyatimiz %.2f", fiyat+=fiyat*kitapvergi/100);
		break;
		case temel : printf("fiyatimiz %.2f", fiyat+=fiyat*temelvergi/100);
		break;	case luks : printf("fiyatimiz %.2f", fiyat+=fiyat*luksvergi/100);
		break;
		default: printf("lutfen dogru kod yaz");
	
	}
}
