#include <stdio.h>
#include <stdlib.h>

int main(){
	int x ;
	int vet[100000];
	float terco,cont=0;
	 
	while (scanf("%d", &x)!= EOF){
		 
		for(int i=0; i<x; i++){
			scanf("%d", &vet[i]);
			if(vet[i]==1){
				cont++;
			}
		}
		terco=x;
		terco= (terco*2)/3;
		if(cont>=terco){
			printf("impeachment\n");
		}else{
			printf("acusacao arquivada\n");
		}
		cont=0;
	}
	return 0;
}
