#include<stdio.h>
#include<stdlib.h>
#define EMEK 200
#define BIRIM 40
int main()
{
	float metrekare,ucret;
	printf("kac metrekare hali?\n");
	scanf("%f",&metrekare);
	ucret= BIRIM*metrekare + EMEK;
	printf("ucretiniz:%.2f",ucret);
}
