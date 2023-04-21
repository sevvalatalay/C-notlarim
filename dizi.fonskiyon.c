#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void yaz(int a[],int n);
void dizi(int a[],int n);
main()
{
    int n;
    printf("dizinin eleman sayisini girin=\n");
    scanf("%d",&n);
    int a[n];
    dizi(a,n);
    yaz(a,n);
    
}
void dizi(int a[],int n)
{
    srand(time(NULL));
    for (int i=0;i<n;i++)
    {
        a[i]=rand()%100;
    }

}
void yaz(int a[],int n)
{
    
    for ( int i=0;i<n;i++)
    {
        printf("%d " ,a[i] );
    }
}
