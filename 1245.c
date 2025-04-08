#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int N,letra,cont=0;
	int valor[5];
	
	
	
	
	while(scanf("%d", &N)!=EOF){
	for(int i = 0; i<N; i++){
		for(int j=0; j<5;j++){
			scanf("%d", &valor[j]);
			if(valor[j]<=127){
				letra=j;
				cont++;
			}
		}
		if(cont==1){
			if(letra==0){
				printf("A\n");
			}
			if(letra==1){
				printf("B\n");
			}
			if(letra==2){
				printf("C\n");
			}
			if(letra==3){
				printf("D\n");
			}
			if(letra==4){
				printf("E\n");
			}
		}else{
			printf("*\n");
		}
		cont=0;
	}
	
}
	return 0;
}
