#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,y,z,sayi;
	printf("sirayla x y z degelerini giriniz\n");
	scanf("%d%d%d",&x,&y,&z);
	sayi= x*100 +y *10 +z ;
	printf("sayi = %d",sayi);
}
