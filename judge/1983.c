#include <stdio.h>
#include <stdlib.h> 
 
int main()
{
	long int leitura, maiorMAT=0,  cont=0;;
	int mat;
	float nota ,maiorNOTA=8.0;
	scanf("%d", &leitura);
	for(int i = 0; i< leitura; i++){
		scanf("%d",  &mat);
		scanf("%f",  &nota);
		if(nota>=maiorNOTA){
			maiorMAT=mat;
			maiorNOTA=nota;
			cont++;
		}
	}
	if(cont==0){
		printf("Minimum note not reached\n");
	}else{
		printf("%d\n",maiorMAT);
	}
	
    return 0;
}
