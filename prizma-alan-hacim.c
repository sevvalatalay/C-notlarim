#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,h;
	printf("Lutfen a b ve h giriniz\n");
	scanf("%d%d%d",&a,&b,&h);
	
	printf("Taban alani=%d\n",a*b);
	printf("Yanal alanlar toplami=%d\n",2*a*h + 2*b*h);
	printf("toplam alanlar=%d\n",2*a*h + 2*b*h + 2*a*b);
	printf("hacim=%d\n",a*b*h);



}
