#include<stdio.h>
#include<stdlib.h>


void degistir (int x,int y)
{
	int gecici;
	gecici=x;
	x=y;
	y=gecici;
	
    printf("x = %d ve y = %d\n",x,y);
}

int main()
{
	int x,y;
	printf("iki sayi giriniz\n");
	scanf("%d %d",&x,&y);
	printf("x = %d ve y = %d\n",x,y);
	degistir(x,y);
	
	
	return 0;
	
}
