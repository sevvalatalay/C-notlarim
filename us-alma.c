#include<stdio.h>
#include<stdlib.h>

int us (int x, int y)
{
	int i;
	int sonuc =1;
	for (i=1;i<=y;i++)
	{
		sonuc=sonuc*x;
	}
	return sonuc;
}



int main()
{
	int a,b;
	printf("taban ve us giriniz\n");
	scanf("%d%d",&a,&b);
	printf("%d ^ %d = %d ",a,b,us(a,b));
	return 0;
	
}
