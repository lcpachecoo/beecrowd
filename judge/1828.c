#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
void verifica(char S[], char R[]){
	if(strcmp(S,R)==0){
		printf("De novo!\n");
		 return;
	}
	if((strcmp(S, "tesoura")==0)&&(strcmp(R,"papel")==0)){
		printf("Bazinga!\n");
		return;
	}
	if((strcmp(S, "tesoura")==0)&&(strcmp(R,"lagarto")==0)){
		printf("Bazinga!\n");
		return;
	}
	if((strcmp(S, "pedra")==0)&&(strcmp(R,"lagarto")==0)){
		printf("Bazinga!\n");
		return;
	}
	if((strcmp(S, "pedra")==0)&&(strcmp(R,"tesoura")==0)){
		printf("Bazinga!\n");
		return;
	}
	if((strcmp(S, "papel")==0)&&(strcmp(R,"pedra")==0)){
		printf("Bazinga!\n");
		return;
	}
	if((strcmp(S, "papel")==0)&&(strcmp(R,"Spock")==0)){
		printf("Bazinga!\n");
		return;
	}
	if((strcmp(S, "lagarto")==0)&&(strcmp(R,"Spock")==0)){
		printf("Bazinga!\n");
		return;
	}
	if((strcmp(S, "lagarto")==0)&&(strcmp(R,"papel")==0)){
		printf("Bazinga!\n");
		return;
	}
	if((strcmp(S, "Spock")==0)&&(strcmp(R,"tesoura")==0)){
		printf("Bazinga!\n");
		return;
	}
	if((strcmp(S, "Spock")==0)&&(strcmp(R,"pedra")==0)){
		printf("Bazinga!\n");
		return;
	}
	printf("Raj trapaceou!\n");
	
}
int main()
{
	int leitura;
	char sheldon[20], raj[20];
	scanf("%d", &leitura);
	for(int i = 1; i<=leitura; i++){
		scanf("%s",  sheldon);
		scanf("%s",  raj);
		printf("Caso #%d: ",i);
		
		verifica(sheldon, raj);
	}
    return 0;
}


