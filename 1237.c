#include <stdio.h>
#include <stdlib.h>

int main(){
	int N,cont;
	char vet[5]="NLSO";
	char letra[1000];
	scanf("%d", &N);
	while(N!=0){
		// LSO       NLSO
		//			 0123
		cont=0;
		scanf("%s", letra);
		for(int i=0; i<N;i++){
			
			if(letra[i]=='D'){
				cont++;
			}else{
				cont--;
			}
			
			if(cont==4){
				cont=0;
			}
			if(cont==-1){
				cont=3;
			}
			
		}
		printf("%c\n",vet[cont]);
		scanf("%d", &N);
	}
	return 0;
}
