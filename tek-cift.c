
#include<stdio.h>
#include<stdlib.h>

int tekmiciftmi (int sevo)
{ 
 
 if(sevo%2==0)
 { return 1;
 }
 else
 { return 0;
 }
}

 int main()
 {
 int sayi,sonuc;
  printf("lutfen bir sayi giriniz: ");
 scanf("%d",&sayi);
 sonuc = tekmiciftmi(sayi);
 if(sonuc==1){
 	printf("%d = sayiniz cift",sayi);
 }
 else{
 	printf("%d = sayiniz tek",sayi);
 }
 }




