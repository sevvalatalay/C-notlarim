#include<stdio.h>
int fak(int n);
int kombinasyon (int n, int r);
main()
{
printf("%d",kombinasyon(5,2));
	
}
int fak(int n)
{
	int fak=1;
	for(int i=2;i<=n;i++)
	{
	
		fak=fak*i;}
		
	return fak;
	
}
int kombinasyon (int n, int r)
{
	return (fak(n) / (fak(r)*fak(n-r)));
}
