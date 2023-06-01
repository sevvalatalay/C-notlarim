#include<stdio.h>
struct ogrenci
{
	char ad[10];
	char soyad[10];
	int yas;
} kisi,kisi1;

main()
{
	struct ogrenci kisi ={"sevval","atalay",22};
	struct ogrenci kisi1={ "sevvalsu","kiki",5};
	printf("%s ",kisi1.ad);
}
