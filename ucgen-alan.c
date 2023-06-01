#include<stdio.h>
#include<stdlib.h>
#include<math.h>


float ucgeninalani(int A, int B, int C)
{
	float u,alan;
	u=(A+B+C)/2;
	alan=sqrt(u*(u-A)*(u-B)*(u-C));
	return alan;
}




int main()
{
	int a,b,c;
	printf("eskenar ucgenin kenar uzunluklarini giriniz:\n");
	scanf("%d%d%d",&a,&b,&c);
	printf("ucgenin alani= %.2f",ucgeninalani(a,b,c));
	return 0;
}
