#include<stdio.h>
#include<stdlib.h>

float dortislem(float a, float b, char islem)
{ 
    if (islem == '+')
    {
    	return a + b;
	}
	else if (islem == '-')
    {
    	return a - b;
	}
	else if (islem == '*')
    {
    	return a * b;
	}
	else if (islem == '/')
    {
    	return a / b;
	}
	else
	{printf("hatali");
	}
}




int main()
{
	char islem;
	int sayi1,sayi2;
	printf("hangi islmei yapmak isterdiniz\n");
	scanf("%c",&islem);
	printf("iki sayi giriniz\n");
	scanf("%d%d",&sayi1,&sayi2);
	
	printf("islemin sonucu %.2f",dortislem(sayi1,sayi2,islem));
	return 0;
}
