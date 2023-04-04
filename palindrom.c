#include <stdio.h>
#include <stdlib.h>

#define MAX 40
void cumleyi_oku(char tab[MAX])
{
    int i=0;
    scanf("%c", &tab[i]);
    while((tab[i] !='\n') && i<MAX)
    {
        i++;
        scanf("%c", &tab[i]);
    }
    tab[i]='\0';
}
int dizinin_boyu(char tab[MAX])
{
    int i;
    for (i = 0; tab[i] != '\0'; i++);
    return i;
}
void boslugu_kaldir(char tab[MAX])
{
    int i;
    int j=0;
    for (i = 0; tab[i] != '\0'; i++)
        if (tab[i] != ' ')
        {
            tab[j] = tab[i];
            j++;
        }
    tab[j] = '\0';
    printf("Boslugu kaldirdiktan sonra dizimiz: ");
    for (i = 0; tab[i] != '\0'; i++)
        printf("%c",tab[i]);
}
void tersine_cevir( char can[MAX], char ters[MAX])
{
    int i;
    int j =dizinin_boyu(can)-1;
    for(i=0; can[i]!='\0'; i++)
    {
        ters[i]=can[j];
        j--;
    }
    printf("\nDizinin tersine cevrilmis hali: ");
    for (i = 0; i<dizinin_boyu(ters); i++)
        printf("%c",ters[i]);
}
int palindrome(char dizi[MAX])
{
    int i=0, L, test=0;
    char gecici[MAX];
    boslugu_kaldir(dizi);
    L=dizinin_boyu(dizi);
    tersine_cevir(dizi, gecici);
    for (i=0; i<L; i++)
    {
        if (gecici[i]!=dizi[i])
            test=0;
        else
            test=1;
    }
    return test;
}
int main (void)
{

    char cumle[MAX];
    int a;
    printf ("Lutfen bir cumle veya kelime girin \n" );
    cumleyi_oku(cumle);
    a=palindrome (cumle);
    if (a==1)
        printf ("\nBu bir palendromdur \n");
    if (a==0)
        printf ("\nBu bir palendrome degildir \n");
    return 0;
}
