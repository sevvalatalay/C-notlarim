#include<stdio.h>
#include<stdlib.h>

int buyukolan( int a, int b)
{
	if (a>b)
	{
		return 1;
	}
	
	else if(a<b)
	{return 0;
	}
	
	else
	{return 2;
	}
}






int main()
{
	int sayi1,sayi2;
	int sonuc;
	printf("iki sayi girin\n");
	scanf("%d%d",&sayi1,&sayi2);
	sonuc=buyukolan(sayi1,sayi2);
	
	if(sonuc==1)
	{printf("%d %d den buyuk",sayi1,sayi2);
	}
	else if(sonuc==0)
	{printf("%d %d den kucuk",sayi1,sayi2);
	}
	else 
	{printf("%d %d esit",sayi1,sayi2);
	}
	return 0;
}
