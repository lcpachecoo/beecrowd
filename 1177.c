#include <stdio.h>

int main() {
    int T,cont=0;
    
    scanf("%d", &T);
    for(int i =0;i<1000;i++){
		printf("N[%d] = %d\n",i, cont);
		cont++;
		if(cont==T)
		cont=0;
		
	}
    return 0;
}
