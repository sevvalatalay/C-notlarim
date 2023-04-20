#include<stdio.h>
#include<windows.h>
void menu(void);
int topla(int a, int b);
int carp(int a, int b);
main()
{
    int i,j;
   
    menu();
    printf("iki sayi giriniz\n");
    scanf("%d %d",&i,&j);
    printf("toplam = %d\n",topla(i,j));
    printf("carpim = %d\n",carp(i,j));
    
}
void menu(void)
{
    printf("-----\nMENU\n-----");
    printf("\n1Topla");
    printf("\n2Fark");
    printf("\n3Carp");
    printf("\n4Bol\n");
}
int carp(int a, int b)
{
    return (a*b);
}
int topla(int a, int b)
{
   
    return (a+b);
}