#include<stdio.h>
#include<stdlib.h>

void hesap(float bir,float iki,char opera,float *sonucu)
{
	switch(opera)
	{
		case '+':
			{
				*sonucu= bir+iki;
				break;
			}
		case '-':
			{
				*sonucu= bir-iki;
				break;
			}
		case '*':
			{
				*sonucu= bir*iki;
				break;
			}
		case '/':
			{
				*sonucu= bir/iki;
				break;
			}
		
	}

}



int main()
{
	float birinci,ikinci;
	char islem;
	float sonuc;
	printf("islem operatoru giriniz\n");
	scanf("%c",&islem);
	printf("iki sayi giriniz\n");
	scanf("%f%f",&birinci,&ikinci);
    hesap(birinci,ikinci,islem,&sonuc);
	printf(" %.2f %c  %.2f = %.2f !!",birinci,islem,ikinci,sonuc);
	return 0;
}
