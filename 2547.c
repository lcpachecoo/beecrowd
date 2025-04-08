#include <stdio.h>
#include <stdlib.h> 
 
int main()
{
	int  x ;
	int min, max, altTESTE;
	int cont=0;
	while (scanf("%d", &x)!= EOF){

		scanf("%d", &min);
		scanf("%d", &max);
		for(int i=0; i <x; i++){
			scanf("%d", &altTESTE);
			if(altTESTE>=min && altTESTE<=max){
				cont++;
			}		
		}
		printf("%d\n", cont);
		cont=0;
		
	}
    return 0;
}
