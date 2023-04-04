#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int sevval[10];
	int i;
	
	for(i=0;i<10;i++){
		sevval[i]=i*2;
	}
	
	for(i=0;i<10;i++){
		printf("%d\n",sevval[i]);
	}
}

