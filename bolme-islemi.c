#include<stdio.h>
#include<stdlib.h>

void islem(int bolunen, int bolen)
{
	int bolum,kalan;
	bolum=bolunen/bolen;
	kalan=bolunen%bolen;
	printf("bolum = %d kalan %d",bolum,kalan);
}





int main()
{
	int bolunen,bolen;
	printf("bolunecek sayiniz\n");
	scanf("%d",&bolunen);
	printf("bolen sayiniz\n");
	scanf("%d",&bolen);
	islem(bolunen,bolen);
	return 0;
}
