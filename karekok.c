#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	float x;
	do
	{ 
	printf("pozitif sayi girin\n");
	scanf("%f",&x);
	
	if (x<0)
	{printf("pozitif girin\n");
	}
	
	if(x<0) continue;
	printf("sayinin karekoku %.2f\n",sqrt(x));
	
	
	
	}while(x);
}
