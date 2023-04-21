#include<stdio.h>
int fak(int n);
int kombinasyon (int n, int r);
main()
{
printf("%d",fak(4));
	
}
int fak(int n)
{
	/*int fak=1;
	for(int i=2;i<=n;i++)
	{
	
		fak=fak*i;}
		
	return fak; */
	if (n<=1)
	{ return 1;}
	else
	return (n*fak(n-1));
	
}
int kombinasyon (int n, int r)
{
	return (fak(n) / (fak(r)*fak(n-r)));
}
