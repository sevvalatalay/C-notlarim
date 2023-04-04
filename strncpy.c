#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[]="sevval su";
	char b[100]=""; /*bos karakter atansa iyi olur hata verebilir ozellýkle n'li fonksiyonlarda!!! */
	
	strncpy(b,a,6);
	
	printf("%s",b);
}
