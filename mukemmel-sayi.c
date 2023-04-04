#include<stdio.h>
#include<stdlib.h>

int mukemmel(int a)
{
	int i=1;
	int toplam=0;
	while(i<6)
	{
		if (a%i==0)
		{
			toplam+=i;
			
		}
		i++;
	}
	if (toplam==a)
	{return 1;
	}
	else
	{return 0;
	}
}




int main()
{
	int sayi;
	int sonuc;
	printf("lutfen sayiniz\n");
	scanf("%d",&sayi);
	sonuc=mukemmel(sayi);
	if (sonuc ==1)
	{printf("muekkeml sayi");
	}
	else
	{printf("mmukemmel degil");
	}
	return 0;
}
