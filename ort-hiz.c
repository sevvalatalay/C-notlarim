#include<stdio.h>
#include<stdlib.h>
#define YOL  450
int main()
{
	float saat,hiz;
	printf("Yolu kac saatte gittiniz\n");
	scanf("%f",&saat);
	hiz= YOL/saat;
	printf("ortalama hiziniz %.2f",hiz);
	
}
