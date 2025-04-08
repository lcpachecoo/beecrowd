#include <stdlib.h>
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num); 
	while(num!=2002){
		printf("Senha Invalida\n");
		scanf("%d", &num); 
	}
	printf("Acesso Permitido\n");

	return 0;
}
