#include <stdio.h>
#include <stdlib.h> 
 int xama(int popA, int popB, double taxa1, double taxa2){
    int a=0, soma=0;
    while(popA<=popB){
        soma= popA*(taxa1/100);
		popA= popA + soma;
		soma= popB*(taxa2/100);
		popB= popB + soma;
		a++;
	}
	return a;
 }
int main()
{
	int leitura;
	int popA, popB;	
	int anos=0;
	double taxa1, taxa2;
	scanf("%d", &leitura);
	for(int i=0; i <leitura; i++){
		scanf("%d", &popA);
		scanf("%d", &popB);
		scanf("%lf", &taxa1);
		scanf("%lf", &taxa2);
		anos=xama(popA, popB, taxa1, taxa2);
		if(anos<=100){
			printf("%d anos.\n", anos);
		}else{
			printf("Mais de 1 seculo.\n");
		}
		
	}
	
    return 0;
}
