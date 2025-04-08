#include <stdio.h>
#include <stdlib.h> 
 
int main()
{
	int leitura;
	float soma=0,maior=0,menor=10000;
	char nome[100];
	float votos[7];
	float peso;
	scanf("%d", &leitura);
	for(int i=0; i <leitura; i++){
		scanf("%s", nome);
		scanf("%f", &peso);
		for(int j=0;j<7;j++){
			scanf("%f", &votos[j]);
			if(maior<votos[j]){
				maior= votos[j];
			}
			if(menor>votos[j]){
				menor= votos[j];
			}
			soma= soma + votos[j];
		}
		soma = soma - menor;
		soma= soma - maior;
		printf("%s %.2f\n", nome , soma*peso);
		soma=0;
		maior=0;
		menor=10000;
		
	}
	
    return 0;
}
