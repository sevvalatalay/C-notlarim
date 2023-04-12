#include<stdio.h>
#include<stdlib.h>

double karekok(double n)
{
    double karekok;
    int i;
    if (n>0.0)
    {
        karekok=n/2;
        for ( i = 0; i < 50; i++)
        {
            karekok=((karekok*karekok)+n)/(2*karekok);
        }
        return karekok;
        


    }
    else if (n==0)
    {
        return 0;
    }
    else
    {
        printf("negatif sayi girdiniz.");
    }
    
    
}

int main()
{
    double sayi;

    printf("karekoku alinacak sayiyi giriniz:\n");
    scanf("%lf",&sayi);
    printf("%lf karekoku=%.5lf",sayi,karekok(sayi));
}