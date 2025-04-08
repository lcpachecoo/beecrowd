#include <stdio.h>
#include <stdlib.h>  

int main() {
	
	int  N[20],cont=0;;
	for(int i =0; i<20;i++){
		scanf("%d", &N[i]);
	}
	
	for(int i =19; i>=0;i--){
		 
		printf("N[%d] = %d\n",cont,N[i]);
		cont++;
		 
	}
    return 0;
}
