#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
void hesapla(float r)
{
	float alan,cevre;
	alan= PI*r*r;
	cevre=2*PI*r;
	printf( "dairenen alani %.2f\ncevre %.2f",alan,cevre);
}






int main()
{
	float yaricap;
	printf ("lutfen yaricapiniz\n");
	scanf("%f",&yaricap);
	
	hesapla(yaricap);
	
	return 0;
	
}
