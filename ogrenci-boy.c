#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int boy,minboy,no,minno,fark;
	printf("ogrenci no\n");
	scanf("%d",&no);
	printf("ogrenci boy\n");
	scanf("%d",&boy);
	minboy=boy;
	minno = no;
	fark= abs(boy-150);
	
	while(no>0)
	{
	printf("ogrenci no\n");
	scanf("%d",&no);
	printf("ogrenci boy\n");
	scanf("%d",&boy);
	if(abs(boy-150)<fark)
	{ fark=abs(boy-150);
	minno=no;
	minboy=boy;
	}
	
		
	}
	printf("%d nolu ogrenci  150 en yakin %d",minno,minboy);
}
