#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i=0;
    char cumle[100];
    printf("lutfen cumleniz\n");
    gets(cumle);
    int sayac=1;
    while(cumle[i])
    {
        if (cumle[i]==32)
        { sayac ++;
        }
        i++;
    }
    printf("cumleniz %d kelimeden olusur\n",sayac);
}