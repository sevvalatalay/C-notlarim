#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int seritoplam(int n)
{
	int i,toplam=0;
	for(i=1;i<=n;i++)
	{
		toplam=toplam+pow(i,2);
		
	}
	return toplam;
}

int main()
{
	int n;
	printf("n degeriniz?\n");
	scanf("%d",&n);
	printf("serinin toplami=%d\n",seritoplam(n));
	return 0;
}
