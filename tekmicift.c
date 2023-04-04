#include<stdio.h>
#include<stdlib.h>

int tekcift ( int a)
{
	return a%2;
}

int main()
{
	int sayi;
	int sonuc;
	printf("lutfen sayiniz\n");
	scanf("%d",&sayi);
	sonuc=tekcift(sayi);
	if (sonuc==0)
	{printf("cift");
	}
	else
	{printf("tek");
	}
	return 0;
}
