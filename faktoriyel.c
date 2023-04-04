#include<stdio.h>
#include<stdlib.h>

int faktoriyel(int sayim)
{
	int i;
	int sonuc=1;
	for(i=1;i<=sayim;i++)
	{
		sonuc = sonuc*i;
	}
	return sonuc;
}



int main()
{
	int sayi;
	printf("lutfen sayiniz");
	scanf("%d",&sayi);
	printf("%d faktoreiyeli %d",sayi,faktoriyel(sayi));
	return 0;
}
