#include<stdio.h>
#include<stdlib.h>

float ortalama(int *dizim,int boyut)
{
    int i;
    int toplam=0;
    for ( i = 0; i < boyut; i++)
    {
        toplam+= dizim[i];
    }
    
    return toplam/boyut;
}




int main()
{
    int n,i;
    float ort;
    printf("kac eleman girilecek? ");
    scanf("%d",&n);
    int dizi[n];
    for ( i = 0; i < n; i++)
    {
        printf("%d. sayiyi giriniz\n", i+1);
        scanf("%d",&dizi[i]);
    }
    
    ort=ortalama(dizi,n);
    printf("girdiginiz sayilarin ortalamasi = %.2f",ort);

    return 0;
}