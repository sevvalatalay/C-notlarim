#include<stdio.h>
#include<stdlib.h>
#define mil 1.609
int main()
{ float milYol,kmYol;
printf("aracin gittigi mil:\n");
scanf("%f",&milYol);

kmYol = milYol*mil;

printf("km yolu: %.2f",kmYol);


}
