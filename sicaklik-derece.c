#include<stdio.h>
#include<stdlib.h>

float FdenCye(float f)
{
	return 0.5555*(f-32);
}

float CdenFye(float c)
{
	return (1.8*c)+32 ;
}


int main()
{
	
	float f,c,secim;
	printf("1 fahrenheit to celsius\n");
	printf("2 celsius to fahrenheit\n");
	scanf("%f",&secim);
	if(secim==1)
	{
		printf("fahrenheit degeriniz?\n");
		scanf("%f",&f);
		printf("%f F = %f C\n",f,FdenCye(f));
	}
	else if(secim==2)
	{
		printf("celcius degeriniz?\n");
		scanf("%f",&c);
		printf("%f C = %f F\n",c,CdenFye(c));
	}
	else
	{
		printf("yanlis secim!!!");
	}

	return 0;
}
